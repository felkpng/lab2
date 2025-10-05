#include <iostream>
#include <sstream>
#include <string>
#include <map>

#include "Pipe.h"
#include "Ks.h"
#include "temp.h"

using namespace std;

void NewPipe(map<int, Pipe>& Pipes, int & pres_id) {
    Pipe newPipe;
    newPipe.fill();

    Pipes[pres_id] = newPipe;
    pres_id++;

    system("cls");
}

void NewKs(map<int, Ks>& stations, int& pres_id) {
    Ks newKs;
    newKs.fill();

    stations[pres_id] = newKs;
    pres_id++;

    system("cls");
}

void ShowAll(map<int, Pipe>& Pipes, map<int, Ks>& stations) {
    system("cls");
    for (const auto& pair : Pipes) {
        cout << "ID: " << pair.first << endl;
        Pipes[pair.first].show();
        cout << endl;
    }

    for (const auto& pair : stations) {
        cout << "ID: " << pair.first << endl;
        stations[pair.first].show();
        cout << endl;
    }
}

void Menu(map<int, Pipe>& pipes, map<int, Ks> &stations) {
    int pres_id = 0;
    
    while (true) {
        cout << "Меню:\n1. Добавить трубу\n2. Добавить КС\n3. Просмотр всех объектов\n4. Редактировать трубу\n5. Редактировать КС\n6. Сохранить\n7. Загрузить\n0. Выход\nВыбор: ";

        int choice = Enter<int>();
        switch (choice) {
        case 1:
            NewPipe(pipes, pres_id);
            break;
        case 2:
            NewKs(stations, pres_id);
            break;
        case 3:
            ShowAll(pipes, stations);
            break;
        }
    }
}

int main()
{
    map<int, Pipe> pipes;
    map<int, Ks> stations;

    setlocale(LC_ALL, "rus");
    Menu(pipes, stations);
    return 0;
}
