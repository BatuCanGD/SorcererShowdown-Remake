#pragma once
#include <cstdint>

namespace Sorcery {
    struct Output final {
        enum class Status : std::uint8_t { BurntOut, Stable, Boosted, Peak };
        double current{1.0};
        double max{1.0};
        Status status{Status::Stable};
    };
    struct CursedEnergy final {
        enum class Efficiency : std::uint8_t { Wasteful, Inefficient, Stable, Efficient, Peak };
        Output output;
        double current{1.0};
        double max{1.0};
        Efficiency efficiency{Efficiency::Stable};
    };
}