#pragma once
#include <cstdint>

namespace Sorcery {
    struct Jujutsu final {

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
}