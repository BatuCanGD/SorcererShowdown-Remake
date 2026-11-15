#pragma once
#include "Identity.hpp"
#include "StatusEffect.hpp"
#include "Base.hpp"
#include <optional>

struct CursedTool final {
    Identity identity;
    Base::Damage damage;
    std::optional<StatusEffect> status_effect;
};