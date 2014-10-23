#pragma once

#include <string>
#include <map>
#include <cstdint>
#include <stdexcept>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/noncopyable.hpp>
#include "wpf_constants.h"


namespace colors {
  namespace wpf {

    template<typename CharT>
    struct basic_named_color;

    template<>
    struct basic_named_color<char> {
      static const char *const black() {
        return "Black";
      }

      static const char *const blue() {
        return "Blue";
      }

      static const char *const brown() {
        return "Brown";
      }

      static const char *const cyan() {
        return "Cyan";
      }

      static const char *const dark_gray() {
        return "DarkGray";
      }

      static const char *const gray() {
        return "Gray";
      }

      static const char *const green() {
        return "Green";
      }

      static const char *const light_gray() {
        return "LightGray";
      }

      static const char *const magenta() {
        return "Magenta";
      }

      static const char *const orange() {
        return "Orange";
      }

      static const char *const purple() {
        return "Purple";
      }

      static const char *const red() {
        return "Red";
      }

      static const char *const transparent() {
        return "Transparent";
      }

      static const char *const white() {
        return "White";
      }

      static const char *const yellow() {
        return "Yellow";
      }
    };

    template<>
    struct basic_named_color<wchar_t> {
      static const wchar_t *const black() {
        return L"Black";
      }

      static const wchar_t *const blue() {
        return L"Blue";
      }

      static const wchar_t *const brown() {
        return L"Brown";
      }

      static const wchar_t *const cyan() {
        return L"Cyan";
      }

      static const wchar_t *const dark_gray() {
        return L"DarkGray";
      }

      static const wchar_t *const gray() {
        return L"Gray";
      }

      static const wchar_t *const green() {
        return L"Green";
      }

      static const wchar_t *const light_gray() {
        return L"LightGray";
      }

      static const wchar_t *const magenta() {
        return L"Magenta";
      }

      static const wchar_t *const orange() {
        return L"Orange";
      }

      static const wchar_t *const purple() {
        return L"Purple";
      }

      static const wchar_t *const red() {
        return L"Red";
      }

      static const wchar_t *const transparent() {
        return L"Transparent";
      }

      static const wchar_t *const white() {
        return L"White";
      }

      static const wchar_t *const yellow() {
        return L"Yellow";
      }
    };

    template<typename CharT>
    struct basic_color_mapper
      : private boost::noncopyable {
      typedef CharT char_type;
      typedef std::basic_string<char_type> string_type;
      typedef basic_named_color<char_type> named_colors_traits;

      typedef std::map<string_type, color_constant::known_color> string_color_map;
      typedef std::map<uint32_t, string_type> color_string_map;

      // Build a name -> constant map
      static const string_color_map &get_string_to_color_map() {
        static string_color_map sm_;   // name -> value
        if (sm_.empty()) {
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::black()), color_constant::black));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::blue()), color_constant::blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::brown()), color_constant::brown));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::cyan()), color_constant::cyan));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_gray()), color_constant::dark_gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::gray()), color_constant::gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::green()), color_constant::green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_gray()), color_constant::light_gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::magenta()), color_constant::magenta));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::orange()), color_constant::orange));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::purple()), color_constant::purple));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::red()), color_constant::red));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::transparent()), color_constant::transparent));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::white()), color_constant::white));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::yellow()), color_constant::yellow));
        }

        return sm_;
      }

      // Build a name -> constant map
      static const color_string_map &get_color_to_string_map() {
        static color_string_map vm_;   // value -> name

        if (vm_.empty()) {
          vm_.insert(std::make_pair(color_constant::black, named_colors_traits::black()));
          vm_.insert(std::make_pair(color_constant::blue, named_colors_traits::blue()));
          vm_.insert(std::make_pair(color_constant::brown, named_colors_traits::brown()));
          vm_.insert(std::make_pair(color_constant::cyan, named_colors_traits::cyan()));
          vm_.insert(std::make_pair(color_constant::dark_gray, named_colors_traits::dark_gray()));
          vm_.insert(std::make_pair(color_constant::gray, named_colors_traits::gray()));
          vm_.insert(std::make_pair(color_constant::green, named_colors_traits::green()));
          vm_.insert(std::make_pair(color_constant::light_gray, named_colors_traits::light_gray()));
          vm_.insert(std::make_pair(color_constant::magenta, named_colors_traits::magenta()));
          vm_.insert(std::make_pair(color_constant::orange, named_colors_traits::orange()));
          vm_.insert(std::make_pair(color_constant::purple, named_colors_traits::purple()));
          vm_.insert(std::make_pair(color_constant::red, named_colors_traits::red()));
          vm_.insert(std::make_pair(color_constant::transparent, named_colors_traits::transparent()));
          vm_.insert(std::make_pair(color_constant::white, named_colors_traits::white()));
          vm_.insert(std::make_pair(color_constant::yellow, named_colors_traits::yellow()));
        }

        return vm_;
      }

    private:
      basic_color_mapper();

      ~basic_color_mapper();

    private:
      // Convert string to lower case
      static string_type to_lowercase(string_type str) {
        boost::to_lower(str);
        return str;
      }
    };

  } // namespace wpf
} // namespace colors
