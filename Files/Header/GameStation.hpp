#pragma once
#include <cstdint>
class Character;

enum class Skip : std::uint8_t {
    None,
    Turns,
    Rounds
};

struct UserChoice {
    Character* character{nullptr};
    Skip skip{Skip::None};
};

namespace Game {
    inline bool run() {
        UserChoice pc;
        return true;
    }
}