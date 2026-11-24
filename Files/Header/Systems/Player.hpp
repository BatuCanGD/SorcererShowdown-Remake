#pragma once
#include <vector>
#include <memory>

struct Character;

using CharacterContainer = std::vector<std::unique_ptr<Character>>;

namespace Player {
    void TakeTurn(Character& c, CharacterContainer& cc);
}