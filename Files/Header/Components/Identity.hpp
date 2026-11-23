#pragma once
#include "Colours.hpp"
#include <string>
#include <atomic>
#include <format>

struct Identity {
    std::string name{"John Judas"};
    std::string color{Colour::Ansi256::f_Gold};
    std::string desc{"The most fearless warrior of all time"};
    size_t id{};
};

inline size_t GetID() {
    static std::atomic_size_t id = 0;
    return ++id;
}

namespace GetInfo {
    inline const std::string Name(const Identity& id) {
        return id.color + id.name + (id.color.empty() ? "" : Colour::Clear);
    }
    inline const std::string Extra(const Identity& id) {
        return Name(id) + "\n|->" + id.desc;
    }
}
namespace Introduce {
    inline const std::string Simple(const Identity& id) {
        return std::format("[{}] {}{}{}", id.color, id.id, id.name, id.color.empty() ? "" : Colour::Clear);
    }
    inline const std::string Pretty(const Identity& id) {
        return std::format("{}[{}] {}{}", id.color, id.id, id.name, id.color.empty() ? "" : Colour::Clear);
    }
}