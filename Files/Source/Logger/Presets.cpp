#include "../../Header/Logger/Presets.hpp"
#include "../../Header/Logger/Logger.hpp"
#include "../../Header/Components/Characters.hpp"

void Preset::Intro::Char(const Character &c) {
    Log::Line("HP:[{}/{}]", c.stats.health.current, c.stats.health.max);
    Log::Line("DR:[{}] | ST:[{}]", c.stats.durability.current, c.stats.strength.current);
}