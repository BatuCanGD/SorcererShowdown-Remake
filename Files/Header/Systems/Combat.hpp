#pragma once
struct Character;

struct Results final {
    double damage{};
    bool did_hit{};
};

namespace Combat {
    Results Damage(Character& c1);
    Results Attack(const Character& c1, const Character& c2);
}