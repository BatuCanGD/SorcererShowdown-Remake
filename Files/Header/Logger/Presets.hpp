#pragma once
#include <cstdint>

struct Character;

namespace Preset {
    enum class Type : std::uint8_t { Regular, Debug };
    namespace Preview {
        void Char(const Character& c, Type type = Type::Regular);
    }
}