#pragma once

namespace Colour {
    inline constexpr const char* Clear  = "\x1b[0m";
    inline constexpr const char* Bold   = "\x1b[1m";

    namespace Basic {
        inline constexpr const char* f_Black          = "\x1b[30m";
        inline constexpr const char* f_Red            = "\x1b[31m";
        inline constexpr const char* f_Green          = "\x1b[32m";
        inline constexpr const char* f_Yellow         = "\x1b[33m";
        inline constexpr const char* f_Blue           = "\x1b[34m";
        inline constexpr const char* f_Purple         = "\x1b[35m";
        inline constexpr const char* f_Cyan           = "\x1b[36m";
        inline constexpr const char* f_BrightRed      = "\x1b[91m";
        inline constexpr const char* f_BrightGreen    = "\x1b[92m";
        inline constexpr const char* f_BrightYellow   = "\x1b[93m";
        inline constexpr const char* f_BrightBlue     = "\x1b[94m";
        inline constexpr const char* f_BrightMagenta  = "\x1b[95m";
        inline constexpr const char* f_BrightCyan     = "\x1b[96m";
        inline constexpr const char* b_Red            = "\x1b[41m";   
    }
    namespace A256 {
        inline constexpr const char* f_LightPink      = "\x1b[38;5;183m";
        inline constexpr const char* f_Orange         = "\x1b[38;5;208m";
        inline constexpr const char* f_Gold           = "\x1b[38;5;214m";
        inline constexpr const char* f_Purple         = "\x1b[38;5;129m";
    }
}