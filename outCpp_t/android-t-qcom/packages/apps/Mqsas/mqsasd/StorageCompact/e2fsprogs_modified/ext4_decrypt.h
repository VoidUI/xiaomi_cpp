/*
 * Copyright (C) Xiaomi Inc.
 *
 */
#ifndef __EXT4_DECRYPT_H
#define __EXT4_DECRYPT_H

#include "ext2fs.h"

/*
 * File system encryption support
 */
#define FS_ENCRYPTION_CONTEXT_V1			1
#define FS_ENCRYPTION_CONTEXT_V2			2

#define FSCRYPT_KEY_DESCRIPTOR_SIZE         8
#define FSCRYPT_KEY_IDENTIFIER_SIZE         16

#define FS_KEY_DERIVATION_NONCE_SIZE        16

#define EXT4_XATTR_NAME_ENCRYPTION_CONTEXT  "c"

#define EXT4_IOC_DECRYPT_FNAME_V1      _IOWR('f', 28, struct encrypt_fname_v1)
#define EXT4_IOC_DECRYPT_FNAME_V2      _IOWR('f', 29, struct encrypt_fname_v2)

struct fscrypt_str {
    char fname[256];
    __u32 len;
};

struct fscrypt_context_v1 {
	__u8 version; /* FSCRYPT_CONTEXT_V1 */
	__u8 contents_encryption_mode;
	__u8 filenames_encryption_mode;
	__u8 flags;
	__u8 master_key_descriptor[FSCRYPT_KEY_DESCRIPTOR_SIZE];
	__u8 nonce[FS_KEY_DERIVATION_NONCE_SIZE];
};

struct fscrypt_context_v2 {
	__u8 version; /* FSCRYPT_CONTEXT_V2 */
	__u8 contents_encryption_mode;
	__u8 filenames_encryption_mode;
	__u8 flags;
	__u8 __reserved[4];
	__u8 master_key_identifier[FSCRYPT_KEY_IDENTIFIER_SIZE];
	__u8 nonce[FS_KEY_DERIVATION_NONCE_SIZE];
};

/*
 * fscrypt_context - the encryption context of an inode
 *
 * This is the on-disk equivalent of an fscrypt_policy, stored alongside each
 * encrypted file usually in a hidden extended attribute.  It contains the
 * fields from the fscrypt_policy, in order to identify the encryption algorithm
 * and key with which the file is encrypted.  It also contains a nonce that was
 * randomly generated by fscrypt itself; this is used as KDF input or as a tweak
 * to cause different files to be encrypted differently.
 */
union fscrypt_context {
	__u8 version;
	struct fscrypt_context_v1 v1;
	struct fscrypt_context_v2 v2;
};

/*encrypt_fname_v1 and encrypt_fname_v2 only for ioctl*/
struct encrypt_fname_v1 {
    struct fscrypt_context_v1 ctx_v1;
    struct fscrypt_str iname;
    struct fscrypt_str oname;
};

struct encrypt_fname_v2 {
    struct fscrypt_context_v2 ctx_v2;
    struct fscrypt_str iname;
    struct fscrypt_str oname;
};

/*
 * Return the size expected for the given fscrypt_context based on its version
 * number, or 0 if the context version is unrecognized.
 */
static inline size_t ext2fs_get_fscrypt_context_size(const union fscrypt_context *ctx)
{
	switch (ctx->version) {
	case FS_ENCRYPTION_CONTEXT_V1:
		return sizeof(ctx->v1);
	case FS_ENCRYPTION_CONTEXT_V2:
		return sizeof(ctx->v2);
	}
	return 0;
}

static inline bool ext2fs_fscrypt_version_is_valid(const union fscrypt_context *ctx)
{
	if (ctx->version == FS_ENCRYPTION_CONTEXT_V1 || ctx->version == FS_ENCRYPTION_CONTEXT_V2)
		return true;
	else
		return false;
}

extern int ext2fs_is_dir_encrypted(ext2_ino_t dir);
extern int ext2fs_decrypt_fname(ext2_ino_t dir, fscrypt_str *iname, fscrypt_str *oname);

#endif