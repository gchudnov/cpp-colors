#pragma once

#if defined(COLOR_CONST_DOT_NET)
#include "dotnet/dotnet_colors.h"
#endif

#if defined(COLOR_CONST_WPF)
#include "wpf/wpf_colors.h"
#endif

namespace colors {

#if defined(COLOR_CONST_DOT_NET)

  template <typename ColorType>
  struct basic_colors {
    typedef ::colors::detail::dot_net::basic_colors<ColorType> type;
  };

#elif defined(COLOR_CONST_WPF)

  template <typename ColorType>
  struct basic_colors {
    typedef ::colors::detail::wpf::basic_colors<ColorType> type;
  };

#else
#   error no colors implementation found
#endif

  typedef basic_colors<::colors::color>::type colors;

} // namespace colors
