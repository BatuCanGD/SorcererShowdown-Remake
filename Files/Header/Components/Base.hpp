#pragma once
#include "Identity.hpp"
#include "AI.hpp"

namespace Base {
    struct Brain final {
        TargetedType targeted_type;
        TargetingType targeting_type;
        ResourcePolicy resource_policy;
        FightingStyle fighting_style;
        FightingPreference fighting_preference;
    };
    struct Status final {
        int stun_timer{3};
        bool is_stunned{false};
        bool is_invincible{false};
    };
    struct Stats final {
        double health{1.0};
        double health_max{1.0};
        double strenght{1.0};
        double durability{1.0};
        Status status;
    };
    struct Equipment final {
        
    };
    struct Character {
        Identity identity;
        Equipment equipment;
        Stats stats;
        Brain brain;
    };
}