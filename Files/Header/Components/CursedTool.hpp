#pragma once
#include "StatusEffect.hpp"
#include "Base.hpp"
#include <optional>
struct CursedTool final {
    std::optional<StatusEffect> status_effect;
    Base::Damage attack;
};