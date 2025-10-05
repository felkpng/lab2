#include "Pipe.h"
#include <string>
#include <iostream>

#include "temp.h"

Pipe::Pipe() : name(""), length(0.0f), diameter(0), repair(false) {}
Pipe::Pipe(std::string name, float length, int diameter, bool repair) : name(name), length(length), diameter(diameter), repair(repair) {}

void Pipe::show() {
    std::cout << "���������� � �����:\n";
    std::cout << "��������: " << name << "\n";
    std::cout << "�����: " << length << " �\n";
    std::cout << "�������: " << diameter << " ��\n";
    std::cout << "� �������: " << (repair ? "��" : "���") << "\n";
}

void Pipe::fill() {
    std::cout << "\n�������� �����\n";
    std::cout << "��������: ";
    std::getline(std::cin, name);

    std::cout << "�����: ";
    float l = Enter<float>();

    std::cout << "�������: ";
    int d = Enter<int>();

    std::cout << "� ������� (0/1): ";
    bool r = Enter<bool>();

    setLength(l);
    setDiameter(d);
    setRepair(r);
}


