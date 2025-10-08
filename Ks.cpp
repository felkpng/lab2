#include "Ks.h"
#include <string>
#include <iostream>

#include "temp.h"

Ks::Ks() : name(""), workshops_count(0), workshops_working(0), type("") {}
Ks::Ks(std::string name, int workshops_count, int workshops_working, std::string type) : name(name), workshops_count(workshops_count), workshops_working(workshops_working), type(type) {}

void Ks::show() {
    std::cout << "Информация о станции:\n";
    std::cout << "Название: " << name << "\n";
    std::cout << "Количество цехов: " << workshops_count << " (" << workshops_working << " в работе)\n";
    std::cout << "Тип: " << type << "\n";
}

void Ks::fill() {
    std::cout << "\nСоздание компрессорной станции\n";
    std::cout << "Название: ";
    std::getline(std::cin, name);

    std::cout << "Количество цехов: ";
    int c = Enter<int>();
    while (c < 0) {
        std::cout << "Число должно быть положительным\nПовторите ввод: ";
        c = Enter<int>();
    }

    std::cout << "Количество цехов в работе: ";
    int w = Enter<int>();
    while (w > c || w < 0) {
        std::cout << "Количество не должно превышать общее количество цехов.\nПовторите ввод: ";
        w = Enter<int>();
    }

    std::cout << "Тип: ";
    std::string t = Enter<std::string>();

    setWorkshopsCount(c);
    setWorkshopsWorking(w);
    setType(t);
}


