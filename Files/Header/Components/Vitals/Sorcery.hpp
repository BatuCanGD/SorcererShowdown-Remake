#pragma once
#include <cstdint>
#include <memory>
#include <vector>
#include <optional>

struct Shikigami;

namespace Sorcery {
    struct Jujutsu final {
        std::vector<std::unique_ptr<Shikigami>> shikigami;
    };
    struct Output final {
        enum class Status : std::uint8_t { BurntOut, Stable, Boosted, Peak };
        double current{1.0};
        double max{1.0};
        Status status{Status::Stable};
    };
    struct ReverseCursedTechnique final {
        double amount{1.0};
        bool unlocked{false};
    };
    struct Reinforcement final {
        double cur{0.0};
    };
    struct Amplification final {
        enum class Status : std::uint8_t { Disabled, Inactive, Active };
        Status status{Status::Disabled};
    };
    struct CursedEnergy final {
        enum class Efficiency : std::uint8_t { Wasteful, Inefficient, Stable, Efficient, Peak };
        Output output;
        double current{1.0};
        double max{1.0};
        Efficiency efficiency{Efficiency::Stable};
    };
    namespace Shikigami {
        enum class SummonType   : std::uint8_t {Inactive,Passive,Active};
        enum class Behaviour    : std::uint8_t {Passive,Active};
        enum class SupportType  : std::uint8_t {None,Health,CursedEnergy,Output};

        struct Adaptation final {
            std::uint8_t next{5}; // amount of turns on active to increment current
            std::uint8_t cur{0};
            std::uint8_t max{4};
            enum class Type : std::uint8_t {HpBoost,CeBoost,OutBoost,AbilityUnlock  };
            Type type;
        };
    }
}