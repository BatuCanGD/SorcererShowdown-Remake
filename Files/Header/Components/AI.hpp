#pragma once
#include <cstdint>
#include <vector>
#include <optional>

struct Character;

namespace AI {
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
    enum class ResourcePolicy : std::uint8_t { // how the character manages their resources
        Wasteful,
        Imprudent,
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

    struct Settings final {
        TargetedType targeted_type{TargetedType::Mixed};
        TargetingType targeting_type{TargetingType::Adaptive};
        ResourcePolicy resource_policy{ResourcePolicy::Adaptive};
        FightingStyle fighting_style{FightingStyle::Mixed};
        FightingPreference fighting_preference{FightingPreference::Mixed};
    };
    struct Memory final {
        std::optional<size_t> last_fought; // these hold character IDs
        std::vector<size_t> attacked_by;   // refer to Identity.hpp
    };
}