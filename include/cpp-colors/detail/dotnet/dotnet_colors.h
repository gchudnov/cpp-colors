#pragma once

#include <boost/noncopyable.hpp>

namespace colors {
  namespace detail {
    namespace dot_net {

      template <typename ColorType>
      struct basic_colors
        : private boost::noncopyable {
        typedef ColorType color_type;

        static color_type alice_blue() { return color_type(color_constant::alice_blue); }
        static color_type antique_white() { return color_type(color_constant::antique_white); }
        static color_type aqua() { return color_type(color_constant::aqua); }
        static color_type aquamarine() { return color_type(color_constant::aquamarine); }
        static color_type azure() { return color_type(color_constant::azure); }
        static color_type beige() { return color_type(color_constant::beige); }
        static color_type bisque() { return color_type(color_constant::bisque); }
        static color_type black() { return color_type(color_constant::black); }
        static color_type blanched_almond() { return color_type(color_constant::blanched_almond); }
        static color_type blue() { return color_type(color_constant::blue); }
        static color_type blue_violet() { return color_type(color_constant::blue_violet); }
        static color_type brown() { return color_type(color_constant::brown); }
        static color_type burly_wood() { return color_type(color_constant::burly_wood); }
        static color_type cadet_blue() { return color_type(color_constant::cadet_blue); }
        static color_type chartreuse() { return color_type(color_constant::chartreuse); }
        static color_type chocolate() { return color_type(color_constant::chocolate); }
        static color_type coral() { return color_type(color_constant::coral); }
        static color_type cornflower_blue() { return color_type(color_constant::cornflower_blue); }
        static color_type cornsilk() { return color_type(color_constant::cornsilk); }
        static color_type crimson() { return color_type(color_constant::crimson); }
        static color_type cyan() { return color_type(color_constant::cyan); }
        static color_type dark_blue() { return color_type(color_constant::dark_blue); }
        static color_type dark_cyan() { return color_type(color_constant::dark_cyan); }
        static color_type dark_goldenrod() { return color_type(color_constant::dark_goldenrod); }
        static color_type dark_gray() { return color_type(color_constant::dark_gray); }
        static color_type dark_green() { return color_type(color_constant::dark_green); }
        static color_type dark_khaki() { return color_type(color_constant::dark_khaki); }
        static color_type dark_magenta() { return color_type(color_constant::dark_magenta); }
        static color_type dark_olive_green() { return color_type(color_constant::dark_olive_green); }
        static color_type dark_orange() { return color_type(color_constant::dark_orange); }
        static color_type dark_orchid() { return color_type(color_constant::dark_orchid); }
        static color_type dark_red() { return color_type(color_constant::dark_red); }
        static color_type dark_salmon() { return color_type(color_constant::dark_salmon); }
        static color_type dark_sea_green() { return color_type(color_constant::dark_sea_green); }
        static color_type dark_slate_blue() { return color_type(color_constant::dark_slate_blue); }
        static color_type dark_slate_gray() { return color_type(color_constant::dark_slate_gray); }
        static color_type dark_turquoise() { return color_type(color_constant::dark_turquoise); }
        static color_type dark_violet() { return color_type(color_constant::dark_violet); }
        static color_type deep_pink() { return color_type(color_constant::deep_pink); }
        static color_type deep_sky_blue() { return color_type(color_constant::deep_sky_blue); }
        static color_type dim_gray() { return color_type(color_constant::dim_gray); }
        static color_type dodger_blue() { return color_type(color_constant::dodger_blue); }
        static color_type firebrick() { return color_type(color_constant::firebrick); }
        static color_type floral_white() { return color_type(color_constant::floral_white); }
        static color_type forest_green() { return color_type(color_constant::forest_green); }
        static color_type fuchsia() { return color_type(color_constant::fuchsia); }
        static color_type gainsboro() { return color_type(color_constant::gainsboro); }
        static color_type ghost_white() { return color_type(color_constant::ghost_white); }
        static color_type gold() { return color_type(color_constant::gold); }
        static color_type goldenrod() { return color_type(color_constant::goldenrod); }
        static color_type gray() { return color_type(color_constant::gray); }
        static color_type green() { return color_type(color_constant::green); }
        static color_type green_yellow() { return color_type(color_constant::green_yellow); }
        static color_type honeydew() { return color_type(color_constant::honeydew); }
        static color_type hot_pink() { return color_type(color_constant::hot_pink); }
        static color_type indian_red() { return color_type(color_constant::indian_red); }
        static color_type indigo() { return color_type(color_constant::indigo); }
        static color_type ivory() { return color_type(color_constant::ivory); }
        static color_type khaki() { return color_type(color_constant::khaki); }
        static color_type lavender() { return color_type(color_constant::lavender); }
        static color_type lavender_blush() { return color_type(color_constant::lavender_blush); }
        static color_type lawn_green() { return color_type(color_constant::lawn_green); }
        static color_type lemon_chiffon() { return color_type(color_constant::lemon_chiffon); }
        static color_type light_blue() { return color_type(color_constant::light_blue); }
        static color_type light_coral() { return color_type(color_constant::light_coral); }
        static color_type light_cyan() { return color_type(color_constant::light_cyan); }
        static color_type light_goldenrod_yellow() { return color_type(color_constant::light_goldenrod_yellow); }
        static color_type light_gray() { return color_type(color_constant::light_gray); }
        static color_type light_green() { return color_type(color_constant::light_green); }
        static color_type light_pink() { return color_type(color_constant::light_pink); }
        static color_type light_salmon() { return color_type(color_constant::light_salmon); }
        static color_type light_sea_green() { return color_type(color_constant::light_sea_green); }
        static color_type light_sky_blue() { return color_type(color_constant::light_sky_blue); }
        static color_type light_slate_gray() { return color_type(color_constant::light_slate_gray); }
        static color_type light_steel_blue() { return color_type(color_constant::light_steel_blue); }
        static color_type light_yellow() { return color_type(color_constant::light_yellow); }
        static color_type lime() { return color_type(color_constant::lime); }
        static color_type lime_green() { return color_type(color_constant::lime_green); }
        static color_type linen() { return color_type(color_constant::linen); }
        static color_type magenta() { return color_type(color_constant::magenta); }
        static color_type maroon() { return color_type(color_constant::maroon); }
        static color_type medium_aquamarine() { return color_type(color_constant::medium_aquamarine); }
        static color_type medium_blue() { return color_type(color_constant::medium_blue); }
        static color_type medium_orchid() { return color_type(color_constant::medium_orchid); }
        static color_type medium_purple() { return color_type(color_constant::medium_purple); }
        static color_type medium_sea_green() { return color_type(color_constant::medium_sea_green); }
        static color_type medium_slate_blue() { return color_type(color_constant::medium_slate_blue); }
        static color_type medium_spring_green() { return color_type(color_constant::medium_spring_green); }
        static color_type medium_turquoise() { return color_type(color_constant::medium_turquoise); }
        static color_type medium_violet_red() { return color_type(color_constant::medium_violet_red); }
        static color_type midnight_blue() { return color_type(color_constant::midnight_blue); }
        static color_type mint_cream() { return color_type(color_constant::mint_cream); }
        static color_type misty_rose() { return color_type(color_constant::misty_rose); }
        static color_type moccasin() { return color_type(color_constant::moccasin); }
        static color_type navajo_white() { return color_type(color_constant::navajo_white); }
        static color_type navy() { return color_type(color_constant::navy); }
        static color_type old_lace() { return color_type(color_constant::old_lace); }
        static color_type olive() { return color_type(color_constant::olive); }
        static color_type olive_drab() { return color_type(color_constant::olive_drab); }
        static color_type orange() { return color_type(color_constant::orange); }
        static color_type orange_red() { return color_type(color_constant::orange_red); }
        static color_type orchid() { return color_type(color_constant::orchid); }
        static color_type pale_goldenrod() { return color_type(color_constant::pale_goldenrod); }
        static color_type pale_green() { return color_type(color_constant::pale_green); }
        static color_type pale_turquoise() { return color_type(color_constant::pale_turquoise); }
        static color_type pale_violet_red() { return color_type(color_constant::pale_violet_red); }
        static color_type papaya_whip() { return color_type(color_constant::papaya_whip); }
        static color_type peach_puff() { return color_type(color_constant::peach_puff); }
        static color_type peru() { return color_type(color_constant::peru); }
        static color_type pink() { return color_type(color_constant::pink); }
        static color_type plum() { return color_type(color_constant::plum); }
        static color_type powder_blue() { return color_type(color_constant::powder_blue); }
        static color_type purple() { return color_type(color_constant::purple); }
        static color_type red() { return color_type(color_constant::red); }
        static color_type rosy_brown() { return color_type(color_constant::rosy_brown); }
        static color_type royal_blue() { return color_type(color_constant::royal_blue); }
        static color_type saddle_brown() { return color_type(color_constant::saddle_brown); }
        static color_type salmon() { return color_type(color_constant::salmon); }
        static color_type sandy_brown() { return color_type(color_constant::sandy_brown); }
        static color_type sea_green() { return color_type(color_constant::sea_green); }
        static color_type sea_shell() { return color_type(color_constant::sea_shell); }
        static color_type sienna() { return color_type(color_constant::sienna); }
        static color_type silver() { return color_type(color_constant::silver); }
        static color_type sky_blue() { return color_type(color_constant::sky_blue); }
        static color_type slate_blue() { return color_type(color_constant::slate_blue); }
        static color_type slate_gray() { return color_type(color_constant::slate_gray); }
        static color_type snow() { return color_type(color_constant::snow); }
        static color_type spring_green() { return color_type(color_constant::spring_green); }
        static color_type steel_blue() { return color_type(color_constant::steel_blue); }
        static color_type tan() { return color_type(color_constant::tan); }
        static color_type teal() { return color_type(color_constant::teal); }
        static color_type thistle() { return color_type(color_constant::thistle); }
        static color_type tomato() { return color_type(color_constant::tomato); }
        static color_type transparent() { return color_type(color_constant::transparent); }
        static color_type turquoise() { return color_type(color_constant::turquoise); }
        static color_type violet() { return color_type(color_constant::violet); }
        static color_type wheat() { return color_type(color_constant::wheat); }
        static color_type white() { return color_type(color_constant::white); }
        static color_type white_smoke() { return color_type(color_constant::white_smoke); }
        static color_type yellow() { return color_type(color_constant::yellow); }
        static color_type yellow_green() { return color_type(color_constant::yellow_green); }
      };

    } // namespace dot_net
  } // namespace detail
} // namespace colors
