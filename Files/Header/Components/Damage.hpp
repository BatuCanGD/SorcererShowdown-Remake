#pragma once
#include <cstdint>
struct Damage final {       //   normal,  reinforcement, technique, both
    enum class Type : std::uint8_t { Regular, Soul, Surehit, Existence };
    double amount{1.0};
    Type type{Type::Regular};
};