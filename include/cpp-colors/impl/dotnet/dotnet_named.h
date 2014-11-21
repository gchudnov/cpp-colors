#pragma once

#include <string>
#include <map>
#include <cstdint>
#include <stdexcept>
#include <boost/algorithm/string/case_conv.hpp>
#include "dotnet_constants.h"


namespace colors {
  namespace dotnet {

    template<typename CharT>
    struct basic_named_color;

    template<>
    struct basic_named_color<char> {
      static const char *const alice_blue() {
        return "AliceBlue";
      }

      static const char *const antique_white() {
        return "AntiqueWhite";
      }

      static const char *const aqua() {
        return "Aqua";
      }

      static const char *const aquamarine() {
        return "Aquamarine";
      }

      static const char *const azure() {
        return "Azure";
      }

      static const char *const beige() {
        return "Beige";
      }

      static const char *const bisque() {
        return "Bisque";
      }

      static const char *const black() {
        return "Black";
      }

      static const char *const blanched_almond() {
        return "BlanchedAlmond";
      }

      static const char *const blue() {
        return "Blue";
      }

      static const char *const blue_violet() {
        return "BlueViolet";
      }

      static const char *const brown() {
        return "Brown";
      }

      static const char *const burly_wood() {
        return "BurlyWood";
      }

      static const char *const cadet_blue() {
        return "CadetBlue";
      }

      static const char *const chartreuse() {
        return "Chartreuse";
      }

      static const char *const chocolate() {
        return "Chocolate";
      }

      static const char *const coral() {
        return "Coral";
      }

      static const char *const cornflower_blue() {
        return "CornflowerBlue";
      }

      static const char *const cornsilk() {
        return "Cornsilk";
      }

      static const char *const crimson() {
        return "Crimson";
      }

      static const char *const cyan() {
        return "Cyan";
      }

      static const char *const dark_blue() {
        return "DarkBlue";
      }

      static const char *const dark_cyan() {
        return "DarkCyan";
      }

      static const char *const dark_goldenrod() {
        return "DarkGoldenrod";
      }

      static const char *const dark_gray() {
        return "DarkGray";
      }

      static const char *const dark_green() {
        return "DarkGreen";
      }

      static const char *const dark_khaki() {
        return "DarkKhaki";
      }

      static const char *const dark_magenta() {
        return "DarkMagenta";
      }

      static const char *const dark_olive_green() {
        return "DarkOliveGreen";
      }

      static const char *const dark_orange() {
        return "DarkOrange";
      }

      static const char *const dark_orchid() {
        return "DarkOrchid";
      }

      static const char *const dark_red() {
        return "DarkRed";
      }

      static const char *const dark_salmon() {
        return "DarkSalmon";
      }

      static const char *const dark_sea_green() {
        return "DarkSeaGreen";
      }

      static const char *const dark_slate_blue() {
        return "DarkSlateBlue";
      }

      static const char *const dark_slate_gray() {
        return "DarkSlateGray";
      }

      static const char *const dark_turquoise() {
        return "DarkTurquoise";
      }

      static const char *const dark_violet() {
        return "DarkViolet";
      }

      static const char *const deep_pink() {
        return "DeepPink";
      }

      static const char *const deep_sky_blue() {
        return "DeepSkyBlue";
      }

      static const char *const dim_gray() {
        return "DimGray";
      }

      static const char *const dodger_blue() {
        return "DodgerBlue";
      }

      static const char *const firebrick() {
        return "Firebrick";
      }

      static const char *const floral_white() {
        return "FloralWhite";
      }

      static const char *const forest_green() {
        return "ForestGreen";
      }

      static const char *const fuchsia() {
        return "Fuchsia";
      }

      static const char *const gainsboro() {
        return "Gainsboro";
      }

      static const char *const ghost_white() {
        return "GhostWhite";
      }

      static const char *const gold() {
        return "Gold";
      }

      static const char *const goldenrod() {
        return "Goldenrod";
      }

      static const char *const gray() {
        return "Gray";
      }

      static const char *const green() {
        return "Green";
      }

      static const char *const green_yellow() {
        return "GreenYellow";
      }

      static const char *const honeydew() {
        return "Honeydew";
      }

      static const char *const hot_pink() {
        return "HotPink";
      }

      static const char *const indian_red() {
        return "IndianRed";
      }

      static const char *const indigo() {
        return "Indigo";
      }

      static const char *const ivory() {
        return "Ivory";
      }

      static const char *const khaki() {
        return "Khaki";
      }

      static const char *const lavender() {
        return "Lavender";
      }

      static const char *const lavender_blush() {
        return "LavenderBlush";
      }

      static const char *const lawn_green() {
        return "LawnGreen";
      }

      static const char *const lemon_chiffon() {
        return "LemonChiffon";
      }

      static const char *const light_blue() {
        return "LightBlue";
      }

      static const char *const light_coral() {
        return "LightCoral";
      }

      static const char *const light_cyan() {
        return "LightCyan";
      }

      static const char *const light_goldenrod_yellow() {
        return "LightGoldenrodYellow";
      }

      static const char *const light_gray() {
        return "LightGray";
      }

      static const char *const light_green() {
        return "LightGreen";
      }

      static const char *const light_pink() {
        return "LightPink";
      }

      static const char *const light_salmon() {
        return "LightSalmon";
      }

      static const char *const light_sea_green() {
        return "LightSeaGreen";
      }

      static const char *const light_sky_blue() {
        return "LightSkyBlue";
      }

      static const char *const light_slate_gray() {
        return "LightSlateGray";
      }

      static const char *const light_steel_blue() {
        return "LightSteelBlue";
      }

      static const char *const light_yellow() {
        return "LightYellow";
      }

      static const char *const lime() {
        return "Lime";
      }

      static const char *const lime_green() {
        return "LimeGreen";
      }

      static const char *const linen() {
        return "Linen";
      }

      static const char *const magenta() {
        return "Magenta";
      }

      static const char *const maroon() {
        return "Maroon";
      }

      static const char *const medium_aquamarine() {
        return "MediumAquamarine";
      }

      static const char *const medium_blue() {
        return "MediumBlue";
      }

      static const char *const medium_orchid() {
        return "MediumOrchid";
      }

      static const char *const medium_purple() {
        return "MediumPurple";
      }

      static const char *const medium_sea_green() {
        return "MediumSeaGreen";
      }

      static const char *const medium_slate_blue() {
        return "MediumSlateBlue";
      }

      static const char *const medium_spring_green() {
        return "MediumSpringGreen";
      }

      static const char *const medium_turquoise() {
        return "MediumTurquoise";
      }

      static const char *const medium_violet_red() {
        return "MediumVioletRed";
      }

      static const char *const midnight_blue() {
        return "MidnightBlue";
      }

      static const char *const mint_cream() {
        return "MintCream";
      }

      static const char *const misty_rose() {
        return "MistyRose";
      }

      static const char *const moccasin() {
        return "Moccasin";
      }

      static const char *const navajo_white() {
        return "NavajoWhite";
      }

      static const char *const navy() {
        return "Navy";
      }

      static const char *const old_lace() {
        return "OldLace";
      }

      static const char *const olive() {
        return "Olive";
      }

      static const char *const olive_drab() {
        return "OliveDrab";
      }

      static const char *const orange() {
        return "Orange";
      }

      static const char *const orange_red() {
        return "OrangeRed";
      }

      static const char *const orchid() {
        return "Orchid";
      }

      static const char *const pale_goldenrod() {
        return "PaleGoldenrod";
      }

      static const char *const pale_green() {
        return "PaleGreen";
      }

      static const char *const pale_turquoise() {
        return "PaleTurquoise";
      }

      static const char *const pale_violet_red() {
        return "PaleVioletRed";
      }

      static const char *const papaya_whip() {
        return "PapayaWhip";
      }

      static const char *const peach_puff() {
        return "PeachPuff";
      }

      static const char *const peru() {
        return "Peru";
      }

      static const char *const pink() {
        return "Pink";
      }

      static const char *const plum() {
        return "Plum";
      }

      static const char *const powder_blue() {
        return "PowderBlue";
      }

      static const char *const purple() {
        return "Purple";
      }

      static const char *const red() {
        return "Red";
      }

      static const char *const rosy_brown() {
        return "RosyBrown";
      }

      static const char *const royal_blue() {
        return "RoyalBlue";
      }

      static const char *const saddle_brown() {
        return "SaddleBrown";
      }

      static const char *const salmon() {
        return "Salmon";
      }

      static const char *const sandy_brown() {
        return "SandyBrown";
      }

      static const char *const sea_green() {
        return "SeaGreen";
      }

      static const char *const sea_shell() {
        return "SeaShell";
      }

      static const char *const sienna() {
        return "Sienna";
      }

      static const char *const silver() {
        return "Silver";
      }

      static const char *const sky_blue() {
        return "SkyBlue";
      }

      static const char *const slate_blue() {
        return "SlateBlue";
      }

      static const char *const slate_gray() {
        return "SlateGray";
      }

      static const char *const snow() {
        return "Snow";
      }

      static const char *const spring_green() {
        return "SpringGreen";
      }

      static const char *const steel_blue() {
        return "SteelBlue";
      }

      static const char *const tan() {
        return "Tan";
      }

      static const char *const teal() {
        return "Teal";
      }

      static const char *const thistle() {
        return "Thistle";
      }

      static const char *const tomato() {
        return "Tomato";
      }

      static const char *const transparent() {
        return "Transparent";
      }

      static const char *const turquoise() {
        return "Turquoise";
      }

      static const char *const violet() {
        return "Violet";
      }

      static const char *const wheat() {
        return "Wheat";
      }

      static const char *const white() {
        return "White";
      }

      static const char *const white_smoke() {
        return "WhiteSmoke";
      }

      static const char *const yellow() {
        return "Yellow";
      }

      static const char *const yellow_green() {
        return "YellowGreen";
      }
    };

    template<>
    struct basic_named_color<wchar_t> {
      static const wchar_t *const alice_blue() {
        return L"AliceBlue";
      }

      static const wchar_t *const antique_white() {
        return L"AntiqueWhite";
      }

      static const wchar_t *const aqua() {
        return L"Aqua";
      }

      static const wchar_t *const aquamarine() {
        return L"Aquamarine";
      }

      static const wchar_t *const azure() {
        return L"Azure";
      }

      static const wchar_t *const beige() {
        return L"Beige";
      }

      static const wchar_t *const bisque() {
        return L"Bisque";
      }

      static const wchar_t *const black() {
        return L"Black";
      }

      static const wchar_t *const blanched_almond() {
        return L"BlanchedAlmond";
      }

      static const wchar_t *const blue() {
        return L"Blue";
      }

      static const wchar_t *const blue_violet() {
        return L"BlueViolet";
      }

      static const wchar_t *const brown() {
        return L"Brown";
      }

      static const wchar_t *const burly_wood() {
        return L"BurlyWood";
      }

      static const wchar_t *const cadet_blue() {
        return L"CadetBlue";
      }

      static const wchar_t *const chartreuse() {
        return L"Chartreuse";
      }

      static const wchar_t *const chocolate() {
        return L"Chocolate";
      }

      static const wchar_t *const coral() {
        return L"Coral";
      }

      static const wchar_t *const cornflower_blue() {
        return L"CornflowerBlue";
      }

      static const wchar_t *const cornsilk() {
        return L"Cornsilk";
      }

      static const wchar_t *const crimson() {
        return L"Crimson";
      }

      static const wchar_t *const cyan() {
        return L"Cyan";
      }

      static const wchar_t *const dark_blue() {
        return L"DarkBlue";
      }

      static const wchar_t *const dark_cyan() {
        return L"DarkCyan";
      }

      static const wchar_t *const dark_goldenrod() {
        return L"DarkGoldenrod";
      }

      static const wchar_t *const dark_gray() {
        return L"DarkGray";
      }

      static const wchar_t *const dark_green() {
        return L"DarkGreen";
      }

      static const wchar_t *const dark_khaki() {
        return L"DarkKhaki";
      }

      static const wchar_t *const dark_magenta() {
        return L"DarkMagenta";
      }

      static const wchar_t *const dark_olive_green() {
        return L"DarkOliveGreen";
      }

      static const wchar_t *const dark_orange() {
        return L"DarkOrange";
      }

      static const wchar_t *const dark_orchid() {
        return L"DarkOrchid";
      }

      static const wchar_t *const dark_red() {
        return L"DarkRed";
      }

      static const wchar_t *const dark_salmon() {
        return L"DarkSalmon";
      }

      static const wchar_t *const dark_sea_green() {
        return L"DarkSeaGreen";
      }

      static const wchar_t *const dark_slate_blue() {
        return L"DarkSlateBlue";
      }

      static const wchar_t *const dark_slate_gray() {
        return L"DarkSlateGray";
      }

      static const wchar_t *const dark_turquoise() {
        return L"DarkTurquoise";
      }

      static const wchar_t *const dark_violet() {
        return L"DarkViolet";
      }

      static const wchar_t *const deep_pink() {
        return L"DeepPink";
      }

      static const wchar_t *const deep_sky_blue() {
        return L"DeepSkyBlue";
      }

      static const wchar_t *const dim_gray() {
        return L"DimGray";
      }

      static const wchar_t *const dodger_blue() {
        return L"DodgerBlue";
      }

      static const wchar_t *const firebrick() {
        return L"Firebrick";
      }

      static const wchar_t *const floral_white() {
        return L"FloralWhite";
      }

      static const wchar_t *const forest_green() {
        return L"ForestGreen";
      }

      static const wchar_t *const fuchsia() {
        return L"Fuchsia";
      }

      static const wchar_t *const gainsboro() {
        return L"Gainsboro";
      }

      static const wchar_t *const ghost_white() {
        return L"GhostWhite";
      }

      static const wchar_t *const gold() {
        return L"Gold";
      }

      static const wchar_t *const goldenrod() {
        return L"Goldenrod";
      }

      static const wchar_t *const gray() {
        return L"Gray";
      }

      static const wchar_t *const green() {
        return L"Green";
      }

      static const wchar_t *const green_yellow() {
        return L"GreenYellow";
      }

      static const wchar_t *const honeydew() {
        return L"Honeydew";
      }

      static const wchar_t *const hot_pink() {
        return L"HotPink";
      }

      static const wchar_t *const indian_red() {
        return L"IndianRed";
      }

      static const wchar_t *const indigo() {
        return L"Indigo";
      }

      static const wchar_t *const ivory() {
        return L"Ivory";
      }

      static const wchar_t *const khaki() {
        return L"Khaki";
      }

      static const wchar_t *const lavender() {
        return L"Lavender";
      }

      static const wchar_t *const lavender_blush() {
        return L"LavenderBlush";
      }

      static const wchar_t *const lawn_green() {
        return L"LawnGreen";
      }

      static const wchar_t *const lemon_chiffon() {
        return L"LemonChiffon";
      }

      static const wchar_t *const light_blue() {
        return L"LightBlue";
      }

      static const wchar_t *const light_coral() {
        return L"LightCoral";
      }

      static const wchar_t *const light_cyan() {
        return L"LightCyan";
      }

      static const wchar_t *const light_goldenrod_yellow() {
        return L"LightGoldenrodYellow";
      }

      static const wchar_t *const light_gray() {
        return L"LightGray";
      }

      static const wchar_t *const light_green() {
        return L"LightGreen";
      }

      static const wchar_t *const light_pink() {
        return L"LightPink";
      }

      static const wchar_t *const light_salmon() {
        return L"LightSalmon";
      }

      static const wchar_t *const light_sea_green() {
        return L"LightSeaGreen";
      }

      static const wchar_t *const light_sky_blue() {
        return L"LightSkyBlue";
      }

      static const wchar_t *const light_slate_gray() {
        return L"LightSlateGray";
      }

      static const wchar_t *const light_steel_blue() {
        return L"LightSteelBlue";
      }

      static const wchar_t *const light_yellow() {
        return L"LightYellow";
      }

      static const wchar_t *const lime() {
        return L"Lime";
      }

      static const wchar_t *const lime_green() {
        return L"LimeGreen";
      }

      static const wchar_t *const linen() {
        return L"Linen";
      }

      static const wchar_t *const magenta() {
        return L"Magenta";
      }

      static const wchar_t *const maroon() {
        return L"Maroon";
      }

      static const wchar_t *const medium_aquamarine() {
        return L"MediumAquamarine";
      }

      static const wchar_t *const medium_blue() {
        return L"MediumBlue";
      }

      static const wchar_t *const medium_orchid() {
        return L"MediumOrchid";
      }

      static const wchar_t *const medium_purple() {
        return L"MediumPurple";
      }

      static const wchar_t *const medium_sea_green() {
        return L"MediumSeaGreen";
      }

      static const wchar_t *const medium_slate_blue() {
        return L"MediumSlateBlue";
      }

      static const wchar_t *const medium_spring_green() {
        return L"MediumSpringGreen";
      }

      static const wchar_t *const medium_turquoise() {
        return L"MediumTurquoise";
      }

      static const wchar_t *const medium_violet_red() {
        return L"MediumVioletRed";
      }

      static const wchar_t *const midnight_blue() {
        return L"MidnightBlue";
      }

      static const wchar_t *const mint_cream() {
        return L"MintCream";
      }

      static const wchar_t *const misty_rose() {
        return L"MistyRose";
      }

      static const wchar_t *const moccasin() {
        return L"Moccasin";
      }

      static const wchar_t *const navajo_white() {
        return L"NavajoWhite";
      }

      static const wchar_t *const navy() {
        return L"Navy";
      }

      static const wchar_t *const old_lace() {
        return L"OldLace";
      }

      static const wchar_t *const olive() {
        return L"Olive";
      }

      static const wchar_t *const olive_drab() {
        return L"OliveDrab";
      }

      static const wchar_t *const orange() {
        return L"Orange";
      }

      static const wchar_t *const orange_red() {
        return L"OrangeRed";
      }

      static const wchar_t *const orchid() {
        return L"Orchid";
      }

      static const wchar_t *const pale_goldenrod() {
        return L"PaleGoldenrod";
      }

      static const wchar_t *const pale_green() {
        return L"PaleGreen";
      }

      static const wchar_t *const pale_turquoise() {
        return L"PaleTurquoise";
      }

      static const wchar_t *const pale_violet_red() {
        return L"PaleVioletRed";
      }

      static const wchar_t *const papaya_whip() {
        return L"PapayaWhip";
      }

      static const wchar_t *const peach_puff() {
        return L"PeachPuff";
      }

      static const wchar_t *const peru() {
        return L"Peru";
      }

      static const wchar_t *const pink() {
        return L"Pink";
      }

      static const wchar_t *const plum() {
        return L"Plum";
      }

      static const wchar_t *const powder_blue() {
        return L"PowderBlue";
      }

      static const wchar_t *const purple() {
        return L"Purple";
      }

      static const wchar_t *const red() {
        return L"Red";
      }

      static const wchar_t *const rosy_brown() {
        return L"RosyBrown";
      }

      static const wchar_t *const royal_blue() {
        return L"RoyalBlue";
      }

      static const wchar_t *const saddle_brown() {
        return L"SaddleBrown";
      }

      static const wchar_t *const salmon() {
        return L"Salmon";
      }

      static const wchar_t *const sandy_brown() {
        return L"SandyBrown";
      }

      static const wchar_t *const sea_green() {
        return L"SeaGreen";
      }

      static const wchar_t *const sea_shell() {
        return L"SeaShell";
      }

      static const wchar_t *const sienna() {
        return L"Sienna";
      }

      static const wchar_t *const silver() {
        return L"Silver";
      }

      static const wchar_t *const sky_blue() {
        return L"SkyBlue";
      }

      static const wchar_t *const slate_blue() {
        return L"SlateBlue";
      }

      static const wchar_t *const slate_gray() {
        return L"SlateGray";
      }

      static const wchar_t *const snow() {
        return L"Snow";
      }

      static const wchar_t *const spring_green() {
        return L"SpringGreen";
      }

      static const wchar_t *const steel_blue() {
        return L"SteelBlue";
      }

      static const wchar_t *const tan() {
        return L"Tan";
      }

      static const wchar_t *const teal() {
        return L"Teal";
      }

      static const wchar_t *const thistle() {
        return L"Thistle";
      }

      static const wchar_t *const tomato() {
        return L"Tomato";
      }

      static const wchar_t *const transparent() {
        return L"Transparent";
      }

      static const wchar_t *const turquoise() {
        return L"Turquoise";
      }

      static const wchar_t *const violet() {
        return L"Violet";
      }

      static const wchar_t *const wheat() {
        return L"Wheat";
      }

      static const wchar_t *const white() {
        return L"White";
      }

      static const wchar_t *const white_smoke() {
        return L"WhiteSmoke";
      }

      static const wchar_t *const yellow() {
        return L"Yellow";
      }

      static const wchar_t *const yellow_green() {
        return L"YellowGreen";
      }
    };

    template<typename CharT>
    struct basic_color_mapper {
      typedef CharT char_type;

      typedef std::basic_string <char_type> string_type;
      typedef basic_named_color<CharT> named_colors_traits;

      typedef std::map <string_type, color_constant::known_color> string_color_map;
      typedef std::map <uint32_t, string_type> color_string_map;

      // Build a name -> constant map
      static const string_color_map &get_string_to_color_map() {
        static string_color_map sm_;   // name -> value
        if (sm_.empty()) {
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::alice_blue()), color_constant::alice_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::antique_white()), color_constant::antique_white));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::aqua()), color_constant::aqua));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::aquamarine()), color_constant::aquamarine));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::azure()), color_constant::azure));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::beige()), color_constant::beige));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::bisque()), color_constant::bisque));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::black()), color_constant::black));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::blanched_almond()), color_constant::blanched_almond));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::blue()), color_constant::blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::blue_violet()), color_constant::blue_violet));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::brown()), color_constant::brown));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::burly_wood()), color_constant::burly_wood));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::cadet_blue()), color_constant::cadet_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::chartreuse()), color_constant::chartreuse));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::chocolate()), color_constant::chocolate));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::coral()), color_constant::coral));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::cornflower_blue()), color_constant::cornflower_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::cornsilk()), color_constant::cornsilk));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::crimson()), color_constant::crimson));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::cyan()), color_constant::cyan));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_blue()), color_constant::dark_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_cyan()), color_constant::dark_cyan));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_goldenrod()), color_constant::dark_goldenrod));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_gray()), color_constant::dark_gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_green()), color_constant::dark_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_khaki()), color_constant::dark_khaki));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_magenta()), color_constant::dark_magenta));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_olive_green()), color_constant::dark_olive_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_orange()), color_constant::dark_orange));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_orchid()), color_constant::dark_orchid));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_red()), color_constant::dark_red));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_salmon()), color_constant::dark_salmon));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_sea_green()), color_constant::dark_sea_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_slate_blue()), color_constant::dark_slate_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_slate_gray()), color_constant::dark_slate_gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_turquoise()), color_constant::dark_turquoise));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dark_violet()), color_constant::dark_violet));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::deep_pink()), color_constant::deep_pink));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::deep_sky_blue()), color_constant::deep_sky_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dim_gray()), color_constant::dim_gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::dodger_blue()), color_constant::dodger_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::firebrick()), color_constant::firebrick));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::floral_white()), color_constant::floral_white));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::forest_green()), color_constant::forest_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::fuchsia()), color_constant::fuchsia));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::gainsboro()), color_constant::gainsboro));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::ghost_white()), color_constant::ghost_white));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::gold()), color_constant::gold));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::goldenrod()), color_constant::goldenrod));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::gray()), color_constant::gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::green()), color_constant::green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::green_yellow()), color_constant::green_yellow));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::honeydew()), color_constant::honeydew));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::hot_pink()), color_constant::hot_pink));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::indian_red()), color_constant::indian_red));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::indigo()), color_constant::indigo));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::ivory()), color_constant::ivory));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::khaki()), color_constant::khaki));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::lavender()), color_constant::lavender));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::lavender_blush()), color_constant::lavender_blush));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::lawn_green()), color_constant::lawn_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::lemon_chiffon()), color_constant::lemon_chiffon));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_blue()), color_constant::light_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_coral()), color_constant::light_coral));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_cyan()), color_constant::light_cyan));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_goldenrod_yellow()), color_constant::light_goldenrod_yellow));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_gray()), color_constant::light_gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_green()), color_constant::light_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_pink()), color_constant::light_pink));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_salmon()), color_constant::light_salmon));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_sea_green()), color_constant::light_sea_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_sky_blue()), color_constant::light_sky_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_slate_gray()), color_constant::light_slate_gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_steel_blue()), color_constant::light_steel_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::light_yellow()), color_constant::light_yellow));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::lime()), color_constant::lime));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::lime_green()), color_constant::lime_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::linen()), color_constant::linen));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::magenta()), color_constant::magenta));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::maroon()), color_constant::maroon));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_aquamarine()), color_constant::medium_aquamarine));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_blue()), color_constant::medium_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_orchid()), color_constant::medium_orchid));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_purple()), color_constant::medium_purple));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_sea_green()), color_constant::medium_sea_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_slate_blue()), color_constant::medium_slate_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_spring_green()), color_constant::medium_spring_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_turquoise()), color_constant::medium_turquoise));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::medium_violet_red()), color_constant::medium_violet_red));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::midnight_blue()), color_constant::midnight_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::mint_cream()), color_constant::mint_cream));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::misty_rose()), color_constant::misty_rose));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::moccasin()), color_constant::moccasin));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::navajo_white()), color_constant::navajo_white));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::navy()), color_constant::navy));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::old_lace()), color_constant::old_lace));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::olive()), color_constant::olive));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::olive_drab()), color_constant::olive_drab));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::orange()), color_constant::orange));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::orange_red()), color_constant::orange_red));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::orchid()), color_constant::orchid));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::pale_goldenrod()), color_constant::pale_goldenrod));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::pale_green()), color_constant::pale_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::pale_turquoise()), color_constant::pale_turquoise));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::pale_violet_red()), color_constant::pale_violet_red));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::papaya_whip()), color_constant::papaya_whip));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::peach_puff()), color_constant::peach_puff));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::peru()), color_constant::peru));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::pink()), color_constant::pink));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::plum()), color_constant::plum));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::powder_blue()), color_constant::powder_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::purple()), color_constant::purple));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::red()), color_constant::red));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::rosy_brown()), color_constant::rosy_brown));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::royal_blue()), color_constant::royal_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::saddle_brown()), color_constant::saddle_brown));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::salmon()), color_constant::salmon));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::sandy_brown()), color_constant::sandy_brown));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::sea_green()), color_constant::sea_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::sea_shell()), color_constant::sea_shell));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::sienna()), color_constant::sienna));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::silver()), color_constant::silver));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::sky_blue()), color_constant::sky_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::slate_blue()), color_constant::slate_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::slate_gray()), color_constant::slate_gray));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::snow()), color_constant::snow));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::spring_green()), color_constant::spring_green));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::steel_blue()), color_constant::steel_blue));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::tan()), color_constant::tan));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::teal()), color_constant::teal));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::thistle()), color_constant::thistle));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::tomato()), color_constant::tomato));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::transparent()), color_constant::transparent));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::turquoise()), color_constant::turquoise));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::violet()), color_constant::violet));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::wheat()), color_constant::wheat));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::white()), color_constant::white));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::white_smoke()), color_constant::white_smoke));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::yellow()), color_constant::yellow));
          sm_.insert(std::make_pair(to_lowercase(named_colors_traits::yellow_green()), color_constant::yellow_green));
        }

        return sm_;
      }

      // Build a name -> constant map
      static const color_string_map &get_color_to_string_map() {
        static color_string_map vm_;   // value -> name

        if (vm_.empty()) {
          vm_.insert(std::make_pair(color_constant::alice_blue, named_colors_traits::alice_blue()));
          vm_.insert(std::make_pair(color_constant::antique_white, named_colors_traits::antique_white()));
          vm_.insert(std::make_pair(color_constant::aqua, named_colors_traits::aqua()));
          vm_.insert(std::make_pair(color_constant::aquamarine, named_colors_traits::aquamarine()));
          vm_.insert(std::make_pair(color_constant::azure, named_colors_traits::azure()));
          vm_.insert(std::make_pair(color_constant::beige, named_colors_traits::beige()));
          vm_.insert(std::make_pair(color_constant::bisque, named_colors_traits::bisque()));
          vm_.insert(std::make_pair(color_constant::black, named_colors_traits::black()));
          vm_.insert(std::make_pair(color_constant::blanched_almond, named_colors_traits::blanched_almond()));
          vm_.insert(std::make_pair(color_constant::blue, named_colors_traits::blue()));
          vm_.insert(std::make_pair(color_constant::blue_violet, named_colors_traits::blue_violet()));
          vm_.insert(std::make_pair(color_constant::brown, named_colors_traits::brown()));
          vm_.insert(std::make_pair(color_constant::burly_wood, named_colors_traits::burly_wood()));
          vm_.insert(std::make_pair(color_constant::cadet_blue, named_colors_traits::cadet_blue()));
          vm_.insert(std::make_pair(color_constant::chartreuse, named_colors_traits::chartreuse()));
          vm_.insert(std::make_pair(color_constant::chocolate, named_colors_traits::chocolate()));
          vm_.insert(std::make_pair(color_constant::coral, named_colors_traits::coral()));
          vm_.insert(std::make_pair(color_constant::cornflower_blue, named_colors_traits::cornflower_blue()));
          vm_.insert(std::make_pair(color_constant::cornsilk, named_colors_traits::cornsilk()));
          vm_.insert(std::make_pair(color_constant::crimson, named_colors_traits::crimson()));
          vm_.insert(std::make_pair(color_constant::cyan, named_colors_traits::cyan()));
          vm_.insert(std::make_pair(color_constant::dark_blue, named_colors_traits::dark_blue()));
          vm_.insert(std::make_pair(color_constant::dark_cyan, named_colors_traits::dark_cyan()));
          vm_.insert(std::make_pair(color_constant::dark_goldenrod, named_colors_traits::dark_goldenrod()));
          vm_.insert(std::make_pair(color_constant::dark_gray, named_colors_traits::dark_gray()));
          vm_.insert(std::make_pair(color_constant::dark_green, named_colors_traits::dark_green()));
          vm_.insert(std::make_pair(color_constant::dark_khaki, named_colors_traits::dark_khaki()));
          vm_.insert(std::make_pair(color_constant::dark_magenta, named_colors_traits::dark_magenta()));
          vm_.insert(std::make_pair(color_constant::dark_olive_green, named_colors_traits::dark_olive_green()));
          vm_.insert(std::make_pair(color_constant::dark_orange, named_colors_traits::dark_orange()));
          vm_.insert(std::make_pair(color_constant::dark_orchid, named_colors_traits::dark_orchid()));
          vm_.insert(std::make_pair(color_constant::dark_red, named_colors_traits::dark_red()));
          vm_.insert(std::make_pair(color_constant::dark_salmon, named_colors_traits::dark_salmon()));
          vm_.insert(std::make_pair(color_constant::dark_sea_green, named_colors_traits::dark_sea_green()));
          vm_.insert(std::make_pair(color_constant::dark_slate_blue, named_colors_traits::dark_slate_blue()));
          vm_.insert(std::make_pair(color_constant::dark_slate_gray, named_colors_traits::dark_slate_gray()));
          vm_.insert(std::make_pair(color_constant::dark_turquoise, named_colors_traits::dark_turquoise()));
          vm_.insert(std::make_pair(color_constant::dark_violet, named_colors_traits::dark_violet()));
          vm_.insert(std::make_pair(color_constant::deep_pink, named_colors_traits::deep_pink()));
          vm_.insert(std::make_pair(color_constant::deep_sky_blue, named_colors_traits::deep_sky_blue()));
          vm_.insert(std::make_pair(color_constant::dim_gray, named_colors_traits::dim_gray()));
          vm_.insert(std::make_pair(color_constant::dodger_blue, named_colors_traits::dodger_blue()));
          vm_.insert(std::make_pair(color_constant::firebrick, named_colors_traits::firebrick()));
          vm_.insert(std::make_pair(color_constant::floral_white, named_colors_traits::floral_white()));
          vm_.insert(std::make_pair(color_constant::forest_green, named_colors_traits::forest_green()));
          vm_.insert(std::make_pair(color_constant::fuchsia, named_colors_traits::fuchsia()));
          vm_.insert(std::make_pair(color_constant::gainsboro, named_colors_traits::gainsboro()));
          vm_.insert(std::make_pair(color_constant::ghost_white, named_colors_traits::ghost_white()));
          vm_.insert(std::make_pair(color_constant::gold, named_colors_traits::gold()));
          vm_.insert(std::make_pair(color_constant::goldenrod, named_colors_traits::goldenrod()));
          vm_.insert(std::make_pair(color_constant::gray, named_colors_traits::gray()));
          vm_.insert(std::make_pair(color_constant::green, named_colors_traits::green()));
          vm_.insert(std::make_pair(color_constant::green_yellow, named_colors_traits::green_yellow()));
          vm_.insert(std::make_pair(color_constant::honeydew, named_colors_traits::honeydew()));
          vm_.insert(std::make_pair(color_constant::hot_pink, named_colors_traits::hot_pink()));
          vm_.insert(std::make_pair(color_constant::indian_red, named_colors_traits::indian_red()));
          vm_.insert(std::make_pair(color_constant::indigo, named_colors_traits::indigo()));
          vm_.insert(std::make_pair(color_constant::ivory, named_colors_traits::ivory()));
          vm_.insert(std::make_pair(color_constant::khaki, named_colors_traits::khaki()));
          vm_.insert(std::make_pair(color_constant::lavender, named_colors_traits::lavender()));
          vm_.insert(std::make_pair(color_constant::lavender_blush, named_colors_traits::lavender_blush()));
          vm_.insert(std::make_pair(color_constant::lawn_green, named_colors_traits::lawn_green()));
          vm_.insert(std::make_pair(color_constant::lemon_chiffon, named_colors_traits::lemon_chiffon()));
          vm_.insert(std::make_pair(color_constant::light_blue, named_colors_traits::light_blue()));
          vm_.insert(std::make_pair(color_constant::light_coral, named_colors_traits::light_coral()));
          vm_.insert(std::make_pair(color_constant::light_cyan, named_colors_traits::light_cyan()));
          vm_.insert(std::make_pair(color_constant::light_goldenrod_yellow, named_colors_traits::light_goldenrod_yellow()));
          vm_.insert(std::make_pair(color_constant::light_gray, named_colors_traits::light_gray()));
          vm_.insert(std::make_pair(color_constant::light_green, named_colors_traits::light_green()));
          vm_.insert(std::make_pair(color_constant::light_pink, named_colors_traits::light_pink()));
          vm_.insert(std::make_pair(color_constant::light_salmon, named_colors_traits::light_salmon()));
          vm_.insert(std::make_pair(color_constant::light_sea_green, named_colors_traits::light_sea_green()));
          vm_.insert(std::make_pair(color_constant::light_sky_blue, named_colors_traits::light_sky_blue()));
          vm_.insert(std::make_pair(color_constant::light_slate_gray, named_colors_traits::light_slate_gray()));
          vm_.insert(std::make_pair(color_constant::light_steel_blue, named_colors_traits::light_steel_blue()));
          vm_.insert(std::make_pair(color_constant::light_yellow, named_colors_traits::light_yellow()));
          vm_.insert(std::make_pair(color_constant::lime, named_colors_traits::lime()));
          vm_.insert(std::make_pair(color_constant::lime_green, named_colors_traits::lime_green()));
          vm_.insert(std::make_pair(color_constant::linen, named_colors_traits::linen()));
          vm_.insert(std::make_pair(color_constant::magenta, named_colors_traits::magenta()));
          vm_.insert(std::make_pair(color_constant::maroon, named_colors_traits::maroon()));
          vm_.insert(std::make_pair(color_constant::medium_aquamarine, named_colors_traits::medium_aquamarine()));
          vm_.insert(std::make_pair(color_constant::medium_blue, named_colors_traits::medium_blue()));
          vm_.insert(std::make_pair(color_constant::medium_orchid, named_colors_traits::medium_orchid()));
          vm_.insert(std::make_pair(color_constant::medium_purple, named_colors_traits::medium_purple()));
          vm_.insert(std::make_pair(color_constant::medium_sea_green, named_colors_traits::medium_sea_green()));
          vm_.insert(std::make_pair(color_constant::medium_slate_blue, named_colors_traits::medium_slate_blue()));
          vm_.insert(std::make_pair(color_constant::medium_spring_green, named_colors_traits::medium_spring_green()));
          vm_.insert(std::make_pair(color_constant::medium_turquoise, named_colors_traits::medium_turquoise()));
          vm_.insert(std::make_pair(color_constant::medium_violet_red, named_colors_traits::medium_violet_red()));
          vm_.insert(std::make_pair(color_constant::midnight_blue, named_colors_traits::midnight_blue()));
          vm_.insert(std::make_pair(color_constant::mint_cream, named_colors_traits::mint_cream()));
          vm_.insert(std::make_pair(color_constant::misty_rose, named_colors_traits::misty_rose()));
          vm_.insert(std::make_pair(color_constant::moccasin, named_colors_traits::moccasin()));
          vm_.insert(std::make_pair(color_constant::navajo_white, named_colors_traits::navajo_white()));
          vm_.insert(std::make_pair(color_constant::navy, named_colors_traits::navy()));
          vm_.insert(std::make_pair(color_constant::old_lace, named_colors_traits::old_lace()));
          vm_.insert(std::make_pair(color_constant::olive, named_colors_traits::olive()));
          vm_.insert(std::make_pair(color_constant::olive_drab, named_colors_traits::olive_drab()));
          vm_.insert(std::make_pair(color_constant::orange, named_colors_traits::orange()));
          vm_.insert(std::make_pair(color_constant::orange_red, named_colors_traits::orange_red()));
          vm_.insert(std::make_pair(color_constant::orchid, named_colors_traits::orchid()));
          vm_.insert(std::make_pair(color_constant::pale_goldenrod, named_colors_traits::pale_goldenrod()));
          vm_.insert(std::make_pair(color_constant::pale_green, named_colors_traits::pale_green()));
          vm_.insert(std::make_pair(color_constant::pale_turquoise, named_colors_traits::pale_turquoise()));
          vm_.insert(std::make_pair(color_constant::pale_violet_red, named_colors_traits::pale_violet_red()));
          vm_.insert(std::make_pair(color_constant::papaya_whip, named_colors_traits::papaya_whip()));
          vm_.insert(std::make_pair(color_constant::peach_puff, named_colors_traits::peach_puff()));
          vm_.insert(std::make_pair(color_constant::peru, named_colors_traits::peru()));
          vm_.insert(std::make_pair(color_constant::pink, named_colors_traits::pink()));
          vm_.insert(std::make_pair(color_constant::plum, named_colors_traits::plum()));
          vm_.insert(std::make_pair(color_constant::powder_blue, named_colors_traits::powder_blue()));
          vm_.insert(std::make_pair(color_constant::purple, named_colors_traits::purple()));
          vm_.insert(std::make_pair(color_constant::red, named_colors_traits::red()));
          vm_.insert(std::make_pair(color_constant::rosy_brown, named_colors_traits::rosy_brown()));
          vm_.insert(std::make_pair(color_constant::royal_blue, named_colors_traits::royal_blue()));
          vm_.insert(std::make_pair(color_constant::saddle_brown, named_colors_traits::saddle_brown()));
          vm_.insert(std::make_pair(color_constant::salmon, named_colors_traits::salmon()));
          vm_.insert(std::make_pair(color_constant::sandy_brown, named_colors_traits::sandy_brown()));
          vm_.insert(std::make_pair(color_constant::sea_green, named_colors_traits::sea_green()));
          vm_.insert(std::make_pair(color_constant::sea_shell, named_colors_traits::sea_shell()));
          vm_.insert(std::make_pair(color_constant::sienna, named_colors_traits::sienna()));
          vm_.insert(std::make_pair(color_constant::silver, named_colors_traits::silver()));
          vm_.insert(std::make_pair(color_constant::sky_blue, named_colors_traits::sky_blue()));
          vm_.insert(std::make_pair(color_constant::slate_blue, named_colors_traits::slate_blue()));
          vm_.insert(std::make_pair(color_constant::slate_gray, named_colors_traits::slate_gray()));
          vm_.insert(std::make_pair(color_constant::snow, named_colors_traits::snow()));
          vm_.insert(std::make_pair(color_constant::spring_green, named_colors_traits::spring_green()));
          vm_.insert(std::make_pair(color_constant::steel_blue, named_colors_traits::steel_blue()));
          vm_.insert(std::make_pair(color_constant::tan, named_colors_traits::tan()));
          vm_.insert(std::make_pair(color_constant::teal, named_colors_traits::teal()));
          vm_.insert(std::make_pair(color_constant::thistle, named_colors_traits::thistle()));
          vm_.insert(std::make_pair(color_constant::tomato, named_colors_traits::tomato()));
          vm_.insert(std::make_pair(color_constant::transparent, named_colors_traits::transparent()));
          vm_.insert(std::make_pair(color_constant::turquoise, named_colors_traits::turquoise()));
          vm_.insert(std::make_pair(color_constant::violet, named_colors_traits::violet()));
          vm_.insert(std::make_pair(color_constant::wheat, named_colors_traits::wheat()));
          vm_.insert(std::make_pair(color_constant::white, named_colors_traits::white()));
          vm_.insert(std::make_pair(color_constant::white_smoke, named_colors_traits::white_smoke()));
          vm_.insert(std::make_pair(color_constant::yellow, named_colors_traits::yellow()));
          vm_.insert(std::make_pair(color_constant::yellow_green, named_colors_traits::yellow_green()));
        }

        return vm_;
      }

    private:
      basic_color_mapper() = delete;
      ~basic_color_mapper() = delete;
      basic_color_mapper(const basic_color_mapper&) = delete;
      basic_color_mapper& operator =(const basic_color_mapper&) = delete;

    private:
      // Convert string to lower case
      static string_type to_lowercase(string_type str) {
        boost::to_lower(str);
        return str;
      }
    };

  } // namespace dotnet
} // namespace colors
