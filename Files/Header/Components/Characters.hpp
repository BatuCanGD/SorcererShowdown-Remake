#pragma once 
#include "Vitals/Base.hpp"
#include "Vitals/Sorcery.hpp"
#include "Identity.hpp"

using TurnResult = std::vector<std::string>;

struct Dummy {
    Identity identity;
    Base::State state;
    Base::Stats stats;
public:
    virtual TurnResult DoTurn() = 0;
    virtual ~Dummy() = default;
};

struct Character : Dummy {
    Base::Equipment equipment;
    Base::Brain brain;
public:
    TurnResult DoTurn() override;
};

struct CurseUser final : Character {
    enum class Type : std::uint8_t { Sorcerer, CursedSpirit };
public:
    Sorcery::Jujutsu jujutsu;
    Sorcery::CursedEnergy cursed_energy;
    Sorcery::Amplification amplification;
    Sorcery::ReverseCursedTechnique rct;
public:
    TurnResult DoTurn() override;
};
struct Shikigami final : Character {
    std::optional<Sorcery::Shikigami::Adaptation> adaptation;
    Sorcery::Shikigami::SummonType summon;
    Sorcery::Shikigami::Behaviour behaviour;
    Sorcery::Shikigami::SupportType support;
public:
    TurnResult DoTurn() override;
};