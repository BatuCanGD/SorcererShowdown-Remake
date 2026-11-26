#pragma once
#include "../AI.hpp"
#include "../StatusEffect.hpp"
#include "../CursedTool.hpp"
#include <vector>

namespace Base {
    enum class Trait : std::uint8_t { PhysicallyGifted };

    struct Brain final {
        TargetedType targeted_type{TargetedType::Mixed};
        TargetingType targeting_type{TargetingType::Adaptive};
        ResourcePolicy resource_policy{ResourcePolicy::Adaptive};
        FightingStyle fighting_style{FightingStyle::Mixed};
        FightingPreference fighting_preference{FightingPreference::Mixed};
    };
    struct Stun final {
        std::uint8_t timer{3};
        bool enabled{false};
    };
    struct State final {
        std::vector<StatusEffect> status_effects;
        std::optional<Trait> trait;
        Stun stun;
    };
    struct Modifier final {
        double additive{};
        double multiplicative{1.0};
    };
    struct Health final {
        const double origin{1.0};
        double current{1.0};
        double max{1.0};
        std::vector<Modifier> modifiers;
    };
    struct Stat final {
        const double origin{1.0};
        double current{1.0};
        std::vector<Modifier> modifiers;
    };
    struct Stats final {
        Health health{};
        Stat strength{};
        Stat durability{};
    };
    struct Damage final {       //   normal,  reinforcement, technique, both
        enum class Type : std::uint8_t { Regular, Soul, Surehit, Existence };
        double amount{1.0};
        Type type{Type::Regular};
    };
    struct Equipment final {
        std::optional<CursedTool> main;
        std::optional<CursedTool> offhand;
        std::optional<std::vector<CursedTool>> inventory;
    };
}