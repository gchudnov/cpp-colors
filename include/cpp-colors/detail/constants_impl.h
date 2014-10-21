#pragma once

#if defined(CORE_COLOR_CONST_DOT_NET)
#include "dotnet/dotnet_constants.h"
#endif

#if defined(CORE_COLOR_CONST_WPF)
#include "wpf/wpf_constants.h"
#endif

namespace colors {

#if defined(CORE_COLOR_CONST_DOT_NET)
  typedef ::colors::detail::dot_net::color_constant color_constant;
#elif defined(CORE_COLOR_CONST_WPF)
  typedef ::colors::detail::wpf::color_constant color_constant;
#else
#   error no color constants implementation found
#endif

} // namespace colors
