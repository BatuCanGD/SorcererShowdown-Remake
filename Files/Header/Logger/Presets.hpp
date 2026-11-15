#pragma once
#include <cstdint>

struct Character;

namespace Preset {
    enum class Type : std::uint8_t { Basic, Detailed };
    namespace Char {
        void Preview(const Character& c, Type type = Type::Basic);
    }
}