#pragma once

namespace Colour {
    inline constexpr const char* Clear  = "\x1b[0m";
    inline constexpr const char* Bold   = "\x1b[1m";

    namespace Basic {
        namespace Foreground {
            inline constexpr const char* Black          = "\x1b[30m";
            inline constexpr const char* Red            = "\x1b[31m";
            inline constexpr const char* Green          = "\x1b[32m";
            inline constexpr const char* Yellow         = "\x1b[33m";
            inline constexpr const char* Blue           = "\x1b[34m";
            inline constexpr const char* Purple         = "\x1b[35m";
            inline constexpr const char* Cyan           = "\x1b[36m";
            inline constexpr const char* BrightRed      = "\x1b[91m";
            inline constexpr const char* BrightGreen    = "\x1b[92m";
            inline constexpr const char* BrightYellow   = "\x1b[93m";
            inline constexpr const char* BrightBlue     = "\x1b[94m";
            inline constexpr const char* BrightMagenta  = "\x1b[95m";
            inline constexpr const char* BrightCyan     = "\x1b[96m";
        }
        namespace Background {
            inline constexpr const char* Red  = "\x1b[41m";   
        }
    }
    namespace Ansi256 {
        namespace Foreground {
            inline constexpr const char* LightPink      = "\x1b[38;5;183m";
            inline constexpr const char* Orange         = "\x1b[38;5;208m";
            inline constexpr const char* Gold           = "\x1b[38;5;214m";
            inline constexpr const char* Purple         = "\x1b[38;5;129m";
        }

    }
}