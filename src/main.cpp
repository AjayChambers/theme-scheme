#include <iostream>
#include <filesystem>
#include "include/json.hpp"

using json = nlohmann::json;


using namespace std;
namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
    std::cout << "Number of arguments: " << argc << "\n";

    for (int i = 0; i < argc; ++i)
    {
        std::cout << "Arg " << i << ": " << argv[i] << "\n";
    }

    return 0;
}