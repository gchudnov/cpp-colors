#pragma once

#include "constants_impl.h"

#if defined(COLOR_CONST_DOT_NET)
#include "dotnet/dotnet_named.h"
#endif

#if defined(COLOR_CONST_WPF)
#include "wpf/wpf_named.h"
#endif

namespace colors {

#if defined(COLOR_CONST_DOT_NET)

  template <typename CharT>
  struct basic_named_color {
    typedef ::colors::detail::dot_net::basic_named_color<CharT> type;
  };

  template <typename CharT>
  struct basic_color_mapper {
    typedef ::colors::detail::dot_net::basic_color_mapper<CharT> type;
  };

#elif defined(COLOR_CONST_WPF)

  template <typename CharT>
  struct basic_named_color {
    typedef ::colors::wpf::basic_named_color<CharT> type;
  };

  template <typename CharT>
  struct basic_color_mapper {
    typedef ::colors::wpf::basic_color_mapper<CharT> type;
  };

#else
#   error no named constants implementation found
#endif

  typedef basic_named_color<char>::type    named_color;
  typedef basic_color_mapper<char>::type   color_mapper;


} // namespace colors
