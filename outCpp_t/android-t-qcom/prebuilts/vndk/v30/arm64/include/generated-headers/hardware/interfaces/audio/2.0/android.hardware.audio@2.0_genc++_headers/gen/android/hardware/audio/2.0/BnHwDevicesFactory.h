#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_V2_0_BNHWDEVICESFACTORY_H
#define HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_V2_0_BNHWDEVICESFACTORY_H

#include <android/hardware/audio/2.0/IHwDevicesFactory.h>

namespace android {
namespace hardware {
namespace audio {
namespace V2_0 {

struct BnHwDevicesFactory : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwDevicesFactory(const ::android::sp<IDevicesFactory> &_hidl_impl);
    explicit BnHwDevicesFactory(const ::android::sp<IDevicesFactory> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwDevicesFactory();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef IDevicesFactory Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<IDevicesFactory> getImpl() { return _hidl_mImpl; }
    // Methods from ::android::hardware::audio::V2_0::IDevicesFactory follow.
    static ::android::status_t _hidl_openDevice(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from ::android::hardware::audio::V2_0::IDevicesFactory follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IDevicesFactory> _hidl_mImpl;
};

}  // namespace V2_0
}  // namespace audio
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_V2_0_BNHWDEVICESFACTORY_H