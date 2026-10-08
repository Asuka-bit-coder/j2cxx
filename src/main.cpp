#include <iostream>
#include <string_view>

namespace {

constexpr std::string_view kVersion = "0.1.0-dev";

}  // namespace

int main(int argc, char* argv[]) {
    if (argc == 2 && std::string_view(argv[1]) == "--version") {
        std::cout << "j2cxx " << kVersion << '\n';
        return 0;
    }

    std::cout << "j2cxx - Java to C++ transpiler\n";
    std::cout << "usage: j2cxx <command> [options]\n";

    return 0;
}
