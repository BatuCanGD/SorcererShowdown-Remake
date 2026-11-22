#pragma once
#include <vector>
#include <memory>
struct Character;

using CharacterContainer = std::vector<std::unique_ptr<Character>>;

struct Holder final {
    CharacterContainer field;
    CharacterContainer queue;
};