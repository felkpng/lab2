#include "Ks.h"
#include <string>
#include <iostream>

#include "temp.h"

Ks::Ks() : name(""), workshops_count(0), workshops_working(0), type("") {}
Ks::Ks(std::string name, int workshops_count, int workshops_working, std::string type) : name(name), workshops_count(workshops_count), workshops_working(workshops_working), type(type) {}

void Ks::show() {
    std::cout << "���������� � �������:\n";
    std::cout << "��������: " << name << "\n";
    std::cout << "���������� �����: " << workshops_count << " (" << workshops_working << " � ������)\n";
    std::cout << "���: " << type << "\n";
}

void Ks::fill() {
    std::cout << "\n�������� ������������� �������\n";
    std::cout << "��������: ";
    std::getline(std::cin, name);

    std::cout << "���������� �����: ";
    int c = Enter<int>();
    while (c < 0) {
        std::cout << "����� ������ ���� �������������\n��������� ����: ";
        c = Enter<int>();
    }

    std::cout << "���������� ����� � ������: ";
    int w = Enter<int>();
    while (w > c || w < 0) {
        std::cout << "���������� �� ������ ��������� ����� ���������� �����.\n��������� ����: ";
        w = Enter<int>();
    }

    std::cout << "���: ";
    std::string t = Enter<std::string>();

    setWorkshopsCount(c);
    setWorkshopsWorking(w);
    setType(t);
}


