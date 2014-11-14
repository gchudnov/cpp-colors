#pragma once

#include <boost/noncopyable.hpp>
#include "wpf_constants.h"

namespace colors {
  namespace wpf {

    template<typename ColorType>
    struct basic_colors
      : private boost::noncopyable {
      typedef ColorType color_type;

      static color_type black() {
        return color_type(color_constant::black);
      }

      static color_type blue() {
        return color_type(color_constant::blue);
      }

      static color_type brown() {
        return color_type(color_constant::brown);
      }

      static color_type cyan() {
        return color_type(color_constant::cyan);
      }

      static color_type dark_gray() {
        return color_type(color_constant::dark_gray);
      }

      static color_type gray() {
        return color_type(color_constant::gray);
      }

      static color_type green() {
        return color_type(color_constant::green);
      }

      static color_type light_gray() {
        return color_type(color_constant::light_gray);
      }

      static color_type magenta() {
        return color_type(color_constant::magenta);
      }

      static color_type orange() {
        return color_type(color_constant::orange);
      }

      static color_type purple() {
        return color_type(color_constant::purple);
      }

      static color_type red() {
        return color_type(color_constant::red);
      }

      static color_type transparent() {
        return color_type(color_constant::transparent);
      }

      static color_type white() {
        return color_type(color_constant::white);
      }

      static color_type yellow() {
        return color_type(color_constant::yellow);
      }
    };

  } // namespace wpf
} // namespace colors
