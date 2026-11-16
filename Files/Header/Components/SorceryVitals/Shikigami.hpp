#pragma once
#include "../Identity.hpp"
#include "../Vitals/Base.hpp"
#include <cstdint>

enum class SummonType : std::uint8_t {
    Inactive,
    Passive,
    Active
};

enum class ShikigamiType : std::uint8_t {
    Passive, // doesnt attack
    Active   // attacks
};

enum class TierType : std::uint8_t {
    HpBoost,
    CeBoost,
    OpBoost,
    AbilityUnlock  
};

enum class SupportType : std::uint8_t {
    None,
    Health,
    CursedEnergy,
    Output
};

struct Tier final {
    std::uint8_t next{5}; // amount of turns on active to increment cur
    std::uint8_t cur{0};
    std::uint8_t max{4};
    TierType type;
};

struct Shikigami final {
    Identity identity;
    Base::Health health;
    Base::State state;
    Base::Stats stats;
    SummonType status;
    ShikigamiType type;
};

