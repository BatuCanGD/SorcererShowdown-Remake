#pragma once
#include "Identity.hpp"
#include "StatusEffect.hpp"
#include "Damage.hpp"
#include <optional>

struct CursedTool final {
    Identity identity;
    Damage damage;
    std::optional<StatusEffect> status_effect;
};