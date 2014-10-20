#pragma once

#include <exception>
#include <string>

namespace colors {

  class color_exception
    : public std::exception {
  public:
    explicit color_exception(const std::string& message)
      : std::exception(message.c_str()) {
      /* no-op */
    }

    virtual ~color_exception() {
      /* no-op */
    }
  };

} // namespace colors
