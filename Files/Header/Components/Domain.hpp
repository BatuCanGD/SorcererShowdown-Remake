#pragma once
#include "Identity.hpp"
#include "Damage.hpp"
#include "Vitals/Base.hpp"

struct Character;
struct CurseUser;

enum class DomainType : std::uint8_t {
    Incomplete,
    Closed,
    Open
};

enum class SurehitType : std::uint8_t {
    Basic,
    Normal,
    Paralyzing
};

enum class Refinement : std::uint8_t {
    Brittle,
    Weak,
    Standard,
    Adept,
    Overwhelming,
    Absolue
};

struct Domain {
    Identity identity;
    Base::Health health{};
    Base::Stat durability{};
    Damage damage{ .type = Damage::Type::Surehit };
    double cost{1.0};
    short range{10};
    bool is_active{false};
    DomainType type{DomainType::Closed};
    Refinement refinement{Refinement::Standard};
    SurehitType surehit_type{SurehitType::Normal};

    inline virtual bool SpecialSurehit(Character& tr) {
        return false;
    }
};