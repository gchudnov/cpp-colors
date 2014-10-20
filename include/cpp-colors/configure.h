#pragma once

//#define CORE_COLOR_CONST_DOT_NET
//#define CORE_COLOR_CONST_WPF

# if defined(CORE_COLOR_CONST_DOT_NET) && defined(CORE_COLOR_CONST_WPF)
  #error both CORE_COLOR_CONST_WPF and CORE_COLOR_CONST_DOT_NET are defined
#elif !defined(CORE_COLOR_CONST_DOT_NET) && !defined(CORE_COLOR_CONST_WPF)
  #define CORE_COLOR_CONST_WPF
#endif
