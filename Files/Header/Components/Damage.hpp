#pragma once
#include <cstdint>

struct Damage final {       //   normal,  reinforcement, technique, both
    enum class Type : std::uint8_t { Regular, Soul, Surehit, Existence };
    double amount{1.0};
    Type type{Type::Regular};
};

namespace Check {
    inline bool BypassRf(Damage::Type dt){
        return dt == Damage::Type::Soul || dt == Damage::Type::Existence;
    }
    inline bool BypassTc(Damage::Type dt){
        return dt == Damage::Type::Surehit || dt == Damage::Type::Existence;
    }
}