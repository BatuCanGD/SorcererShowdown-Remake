#include "../../Header/Logger/Presets.hpp"
#include "../../Header/Logger/Logger.hpp"
#include "../../Header/Components/Vitals/Characters.hpp"

void Preset::Char::Preview(const Character &c, Type type) {
    switch (type) {
        default: [[fallthrough]];
        case Type::Basic:
            Log::Line("HP:[{}/{}]", c.stats.health.current, c.stats.health.max);
            break;
        case Type::Detailed:
            Log::Line();
            break;
    }
}