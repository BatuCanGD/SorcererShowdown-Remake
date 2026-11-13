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
    struct Stats final {

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