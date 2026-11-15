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
};
struct CurseUser : Character {
    Sorcery::CursedEnergy cursed_energy;
};