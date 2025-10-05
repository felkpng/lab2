#include "Pipe.h"
#include <string>
#include <iostream>

#include "temp.h"

Pipe::Pipe() : name(""), length(0.0f), diameter(0), repair(false) {}
Pipe::Pipe(std::string name, float length, int diameter, bool repair) : name(name), length(length), diameter(diameter), repair(repair) {}

void Pipe::show() {
    std::cout << "Информация о трубе:\n";
    std::cout << "Название: " << name << "\n";
    std::cout << "Длина: " << length << " м\n";
    std::cout << "Диаметр: " << diameter << " мм\n";
    std::cout << "В ремонте: " << (repair ? "Да" : "Нет") << "\n";
}

void Pipe::fill() {
    std::cout << "\nСоздание трубы\n";
    std::cout << "Название: ";
    std::getline(std::cin, name);

    std::cout << "Длина: ";
    float l = Enter<float>();

    std::cout << "Диаметр: ";
    int d = Enter<int>();

    std::cout << "В ремонте (0/1): ";
    bool r = Enter<bool>();

    setLength(l);
    setDiameter(d);
    setRepair(r);
}


