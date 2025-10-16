#include "Pipe.h"
#include <string>
#include <iostream>

#include "temp.h"
#include "logger.h"

Pipe::Pipe() : name(""), length(0.0f), diameter(0), repair(false) {}
Pipe::Pipe(std::string name, float length, int diameter, bool repair) : name(name), length(length), diameter(diameter), repair(repair) {}

std::ostream& operator<<(std::ostream& os, const Pipe& truba) {
    bool toConsole = (&os == &std::cout);

    if (toConsole) {
        os << "���������� � �����:\n"
            << "��������: " << truba.getName() << '\n'
            << "�����: " << truba.getLength() << '\n'
            << "�������: " << truba.getDiameter() << '\n'
            << "� �������: " << (truba.isRepair() ? "��" : "���") << "\n";
    }
    else {
        os << truba.getName() << '\n'
            << truba.getLength() << '\n'
            << truba.getDiameter() << '\n'
            << truba.isRepair() << '\n';
    }

    return os;
}

std::istream& operator>>(std::istream& is, Pipe& truba) {
    bool fromConsole = (&is == &std::cin);

    if (fromConsole) {
        std::cout << "\n�������� �����\n";

        std::cout << "��������: ";
        std::string n;
        std::getline(std::cin >> std::ws, n);

        std::cout << "�����: ";
        float l = Enter<float>();
        while (l <= 0) {
            std::cout << "����� ������ ��������� 0\n��������� ����: ";
            l = Enter<float>();
        }

        std::cout << "�������: ";
        int d = Enter<int>();
        while (d <= 0) {
            std::cout << "������� ������ ��������� 0\n��������� ����: ";
            d = Enter<int>();
        }

        std::cout << "� ������� (0/1): ";
        bool r = Enter<bool>();

        truba.setName(n);
        truba.setLength(l);
        truba.setDiameter(d);
        truba.setRepair(r);
    }
    else {
        std::string n;
        float l;
        int d;
        bool r;

        std::getline(is >> std::ws, n);
        is >> l >> d >> r;

        truba.setName(n);
        truba.setLength(l);
        truba.setDiameter(d);
        truba.setRepair(r);
    }

    return is;
}
