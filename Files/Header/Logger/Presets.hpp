#pragma once
#include <cstdint>

struct Character;

namespace Preset {
    enum class Type : std::uint8_t { Basic, Detailed };
    void PreviewCharacter(const Character& c, Type type = Type::Basic);
}