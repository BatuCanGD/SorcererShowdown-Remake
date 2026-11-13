#pragma once
#include <cstdint>
enum class TargetingType : std::uint8_t {
    HighestHp,
    LowestHp,
    Adaptive,
    Random
};
enum class TargetedType : std::uint8_t {
    CharacterOnly,
    Mixed
};
enum class ResourcePolicy : std::uint8_t { // how eager the character is to under/overspend their resources
    Wasteful,
    Aggressive,
    Conservative,
    Overcautious,
    Adaptive
};
enum class FightingPreference : std::uint8_t { // preferred fighting type
    Mixed,
    HandToHand,
    CursedTools,
    Technique,
    Domain
};
enum class FightingStyle : std::uint8_t {
    Aggressive,
    Cautious,
    Mixed
};