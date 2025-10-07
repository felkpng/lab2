#pragma once
#include <iostream>
#include <fstream>
#include <string>

extern std::ofstream logFile;

std::string LoggedInput() {
    std::string input;
    std::getline(std::cin, input);

    if (logFile.is_open()) {
        logFile << input << std::endl;
    }

    return input;
}
