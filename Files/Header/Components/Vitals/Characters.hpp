#pragma once 
#include "Base.hpp"
#include "../Identity.hpp"
#include "../SorceryVitals/Sorcery.hpp"

enum class Type : std::uint8_t { 
    Sorcerer, 
    CursedSpirit 
};

struct Dummy {
    Identity identity;
    Base::State state;
    Base::Stats stats;

    virtual ~Dummy() = default;
};

struct Character : Dummy {
    Base::Equipment equipment;
    Base::Brain brain;
};

struct Sorcerer final : Character {
    Sorcery::Jujutsu jujutsu;
    Sorcery::CursedEnergy cursed_energy;
    Sorcery::Amplification amplification;
    Sorcery::ReverseCursedTechnique rct;
};
struct Shikigami final : Character {
    Sorcery::CursedEnergy cursed_energy;
};