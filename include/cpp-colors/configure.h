#pragma once

//#define COLOR_CONST_DOT_NET
//#define COLOR_CONST_WPF

# if defined(COLOR_CONST_DOT_NET) && defined(COLOR_CONST_WPF)
  #error both COLOR_CONST_WPF and COLOR_CONST_DOT_NET are defined
#elif !defined(COLOR_CONST_DOT_NET) && !defined(COLOR_CONST_WPF)
  #define COLOR_CONST_WPF
#endif
