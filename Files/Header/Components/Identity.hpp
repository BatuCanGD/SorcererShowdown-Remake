#pragma once
#include "Colours.hpp"
#include <string>

struct Identity {
    std::string name{"John Judas"};
    std::string color{"\x1b[32m"};
    std::string desc{"The most fearless warrior of all time"};
    size_t id{};
};

namespace GetInfo {
    inline const std::string Name(const Identity& id) {
        return id.color + id.name + (id.color.empty() ? "" : Colour::Clear);
    }
    inline const std::string Extra(const Identity& id) {
        return Name(id) + "\n﹂" + id.desc;
    }
}
namespace Introduce {
    inline const std::string Simple(const Identity& id) {

    }
}