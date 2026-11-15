#pragma once 
#include "../Identity.hpp"
#include "../Base.hpp"
#include "../Sorcery.hpp"

struct Character {
    Identity identity;
    Base::Equipment equipment;
    Base::Stats stats;
    Base::State state;
    Base::Brain brain;

    virtual ~Character() = default;
};
struct CurseUser : Character {
    Sorcery::Jujutsu jujutsu;
    Sorcery::CursedEnergy cursed_energy;
    Sorcery::ReverseCursedTechnique rct;
};