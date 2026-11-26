#pragma once
#include <format>
#include <string>
#include <vector>
#include <print>

namespace Log {
    namespace Internal {
        inline  void WriteMessage(bool n, std::string_view sv, std::format_args ags) {
            std::vprint_unicode(stdout, sv, ags);
            if (n) std::fputc('\n', stdout);
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
namespace Queue {
    inline std::vector<std::string> queue;
    inline void Clear() {
        queue.clear();
    }
    inline void Add(std::string_view s){
        queue.emplace_back(std::string(s));
    }
    inline void Flush() {
        for (const auto& c : queue){
            Log::Line("{}", c);
        }
        queue.clear();
    }
}