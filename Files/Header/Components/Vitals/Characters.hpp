#pragma once 
#include "Base.hpp"
#include "../Identity.hpp"
#include "../SorceryVitals/Sorcery.hpp"

struct Character {
    Identity identity;
    Base::Equipment equipment;
    Base::Stats stats;
    Base::State state;
    Base::Brain brain;

    virtual ~Character() = default;
};
struct Sorcerer final : Character {
    enum class Type : std::uint8_t { Sorcerer, CursedSpirit };
    Sorcery::Jujutsu jujutsu;
    Sorcery::CursedEnergy cursed_energy;
    Sorcery::Amplification amplification;
    Sorcery::ReverseCursedTechnique rct;
};