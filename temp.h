#pragma once
#include <iostream>
#include <sstream>
#include <string>

template<typename T>
T Enter() {
    std::string enter;
    T value;

    while (true) {
        std::getline(std::cin, enter);
        std::stringstream ss(enter);
        ss >> value;

        if (!ss.fail() && ss.eof()) {
            return value;
        }

        std::cout << "Ошибка ввода. Неверный формат данных.\nПовторите ввод: ";
    }
}