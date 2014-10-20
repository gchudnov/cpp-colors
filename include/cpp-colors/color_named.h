#pragma once

#include <string>
#include <map>
#include <cstdint>
#include <stdexcept>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/noncopyable.hpp>

#include "constants.h"
#include "detail/named_impl.h"


namespace colors {

  ///////////////////////////////////////////////////////////////////////////////
  // Used to convert named colors to the numeric value
  template <typename CharT>
  class basic_named_color_converter {
  private:
    typedef CharT char_type;
    typedef std::basic_string<char_type> string_type;

    typedef typename basic_color_mapper<char_type>::type color_mapper_type;

    typedef typename color_mapper_type::string_color_map string_color_map;
    typedef typename color_mapper_type::color_string_map color_string_map;

  private:
    basic_named_color_converter();
    ~basic_named_color_converter();

  public:
    // Get the value of the color
    static color_constant::known_color value(const string_type& str) {
      const string_color_map& sm = color_mapper_type::get_string_to_color_map();
      string_color_map::const_iterator it = sm.find(to_lowercase(str));
      if (it == sm.end())
        throw std::invalid_argument("Invalid color name.");

      return it->second;
    }

    // Get the name of the color
    static string_type name(uint32_t value) {
      const color_string_map& vm = color_mapper_type::get_color_to_string_map();
      color_string_map::const_iterator it = vm.find(value);
      if (it == vm.end())
        throw std::invalid_argument("Invalid color value.");

      return it->second;
    }

    static string_type name(int32_t value) {
      return basic_named_color_converter::name(static_cast<uint32_t>(value));
    }

    // Returns TRUE if the argument is a named color
    static bool is_named(const string_type& str) {
      const string_color_map& sm = color_mapper_type::get_string_to_color_map();
      return (sm.find(to_lowercase(str)) != sm.end());
    }

    static bool is_named(uint32_t value) {
      const color_string_map& vm = color_mapper_type::get_color_to_string_map();
      return (vm.find(value) != vm.end());
    }

  private:
    // Convert string to lower case
    static string_type to_lowercase(string_type str) {
      boost::to_lower(str);
      return str;
    }
  };

  typedef basic_named_color_converter<char> named_color_converter;

} // namespace colors
