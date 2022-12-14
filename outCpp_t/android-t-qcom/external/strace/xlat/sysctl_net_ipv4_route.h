/* Generated by ./xlat/gen.sh from ./xlat/sysctl_net_ipv4_route.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysctl_net_ipv4_route in mpers mode

# else

static
const struct xlat sysctl_net_ipv4_route[] = {
 XLAT(NET_IPV4_ROUTE_FLUSH),
 XLAT(NET_IPV4_ROUTE_MIN_DELAY),
 XLAT(NET_IPV4_ROUTE_MAX_DELAY),
 XLAT(NET_IPV4_ROUTE_GC_THRESH),
 XLAT(NET_IPV4_ROUTE_MAX_SIZE),
 XLAT(NET_IPV4_ROUTE_GC_MIN_INTERVAL),
 XLAT(NET_IPV4_ROUTE_GC_TIMEOUT),
 XLAT(NET_IPV4_ROUTE_GC_INTERVAL),
 XLAT(NET_IPV4_ROUTE_REDIRECT_LOAD),
 XLAT(NET_IPV4_ROUTE_REDIRECT_NUMBER),
 XLAT(NET_IPV4_ROUTE_REDIRECT_SILENCE),
 XLAT(NET_IPV4_ROUTE_ERROR_COST),
 XLAT(NET_IPV4_ROUTE_ERROR_BURST),
 XLAT(NET_IPV4_ROUTE_GC_ELASTICITY),
 XLAT(NET_IPV4_ROUTE_MTU_EXPIRES),
 XLAT(NET_IPV4_ROUTE_MIN_PMTU),
 XLAT(NET_IPV4_ROUTE_MIN_ADVMSS),
 XLAT(NET_IPV4_ROUTE_SECRET_INTERVAL),
#if defined(NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS) || (defined(HAVE_DECL_NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS) && HAVE_DECL_NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS)
  XLAT(NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */