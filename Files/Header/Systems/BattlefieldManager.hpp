#pragma once
#include <memory>
#include <vector>
struct Character;

using CharacterContainer = std::vector<std::unique_ptr<Character>>;

namespace BattlefieldManager {
    void HandleDomainExpansions(CharacterContainer cc);
    void HandleTheDead(CharacterContainer cc);
}