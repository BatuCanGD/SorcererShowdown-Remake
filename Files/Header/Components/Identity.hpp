#pragma once
#include <string>

struct Identity {
    std::string name{"John Judas"};
    std::string color{"\x1b[32m"};
    std::string desc{"The most fearless warrior of all time"};
};

namespace GetInfo {
    inline const std::string Name(const Identity& id) {
        return id.color + id.name + (id.color.empty() ? "" : "\x1b[0m");
    }
    inline const std::string Extra(const Identity& id) {
        return Name(id) + "\n﹂" + id.desc;
    }
}