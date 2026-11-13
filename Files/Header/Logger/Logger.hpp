#pragma once
#include <format>
#include <print>

namespace Log {
    namespace Internal {
        inline void WriteMessage(bool newline, std::string_view sv, std::format_args ags) {
            std::vprint_unicode(stdout, sv, ags);
            if (newline) std::fputc('\n', stdout);
        }
        inline void WriteError(std::string_view sv, std::format_args ags) {
            std::vprint_unicode(stderr, sv, ags);
            std::fputc('\n', stderr);
        }
    }
    template <typename... Args>
    inline void Message(std::format_string<Args...> f, Args&&... a){
        Internal::WriteMessage(false, f.get(), std::make_format_args(a...));
    }
    template <typename... Args>
    inline void Line(std::format_string<Args...> f = "", Args&&... a){
        Internal::WriteMessage(true, f.get(), std::make_format_args(a...));
    }
    template <typename... Args>
    inline void Error(std::format_string<Args...> f, Args&&... a) {
        Internal::WriteError(f.get(), std::make_format_args(a...));
    }
}

