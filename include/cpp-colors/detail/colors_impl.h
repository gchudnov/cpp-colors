#pragma once

#if defined(CORE_COLOR_CONST_DOT_NET)
#pragma message("Colors: DotNet") 
#include "detail/dotnet/dotnet_colors.h"
#endif

#if defined(CORE_COLOR_CONST_WPF)
#pragma message("Colors: WPF") 
#include "detail/wpf/wpf_colors.h"
#endif

namespace colors {

#if defined(CORE_COLOR_CONST_DOT_NET)

  template <typename ColorType>
  struct basic_colors {
    typedef ::colors::detail::dot_net::basic_colors<ColorType> type;
  };

#elif defined(CORE_COLOR_CONST_WPF)

  template <typename ColorType>
  struct basic_colors {
    typedef ::colors::detail::wpf::basic_colors<ColorType> type;
  };

#else
#   error no colors implementation found
#endif

  typedef basic_colors<::colors::color>::type colors;

} // namespace colors
