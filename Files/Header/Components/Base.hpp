#pragma once
#include "AI.hpp"
#include "StatusEffect.hpp"
#include <vector>

namespace Base {
    struct Brain final {
        TargetedType targeted_type{TargetedType::Mixed};
        TargetingType targeting_type{TargetingType::Adaptive};
        ResourcePolicy resource_policy{ResourcePolicy::Adaptive};
        FightingStyle fighting_style{FightingStyle::Mixed};
        FightingPreference fighting_preference{FightingPreference::Mixed};
    };
    struct Stun final {
        std::uint8_t timer{3};
        bool is_true{false};
    };
    struct State final {
        std::vector<StatusEffect> status_effects;
        Stun stun;
    };
    struct Health final {
        double current{1.0};
        double max{1.0};
    };
    struct Stats final {
        Health health{};
        double strength{1.0};
        double durability{1.0};
    };
    struct Damage final {       //   normal,  reinforcement, technique, both
        enum class Type : std::uint8_t { Regular, Soul, Surehit, Existence };
        double damage{1.0};
        Type type{Type::Regular};
    };
    struct Equipment final {
        
    };
}