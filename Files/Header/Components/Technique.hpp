#pragma once
#include "StatusEffect.hpp"
#include "Damage.hpp"
#include "Identity.hpp"

#include <vector>
#include <cstdint>
#include <optional>

enum class AttackType : std::uint8_t {
    Singular,
    AreaOfEffect
};
enum class RequiredStat : std::uint8_t {
    None,
    HealthLow,
    HealthMid,
    HealthHigh
};
enum class ChantTier : std::uint8_t {
    None,
    First, // placeholders
    Second,
    Third,
    Fourth,
    Max
};

struct TechRequirement final {
    RequiredStat stat_req{RequiredStat::None};
    std::uint8_t chant_req{0};
};

struct TechAbility final {
    Identity id{};
    std::optional<StatusEffect> given_effect;
    std::optional<TechRequirement> requirement;
    Damage damage{};
    double cost{1.0};
    double output_cost{1.0};
    ChantTier chant_tier{};
    AttackType attack_type{AttackType::Singular};
};
struct TechBarrier final {
    enum class Status : std::uint8_t { Unusable, Inactive, Active};
    Status status{Status::Unusable};
};

struct Technique final {
    std::vector<TechAbility> abilities;
    TechBarrier barrier;
    Identity identity;
};