#include <iostream>
#include "Home.h"
#include "Apartment.h"
#include "Human.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    int numApart, numFloor, floor, apart, sizeArr;
    Home home;

    do {
        // Ввод количества квартир
        cout << "Введите количество квартир (должно быть больше 0): ";
        cin >> numApart;

        if (numApart <= 0) {
            cout << "Ошибка: количество квартир должно быть больше 0\n";
        }
        // Ввод количества этажей
        cout << "\nВведите количество этажей (должно быть больше 0): ";
        cin >> numFloor;

        if (numFloor <= 0) {
            cout << "Ошибка: количество этажей должно быть больше 0\n";
        }
    } while (numApart <= 0 && numFloor <= 0);

    // Установка количества этажей в доме
    home.setNumFloor(numFloor);

    // Ввод данных для каждой квартиры
    for (int i = 0; i < numApart; i++) {
        do {
            cout << "\nВведите этаж (от 1 до " << numFloor << "): ";
            cin >> floor;

            if (floor < 1 || floor > numFloor) {
                cout << "Ошибка: этаж должен быть от 1 до " << numFloor << "\n";
            }

            cout << "Введите номер квартиры (положительное число): ";
            cin >> apart;

            if (apart <= 0) {
                cout << "Ошибка: номер квартиры должен быть положительным числом\n";
            }

            cout << "Введите размер квартир (положительное число): ";
            cin >> sizeArr;

            if (sizeArr <= 0) {
                cout << "Ошибка: размер квартиры должен быть положительным числом\n";
            }

        } while (floor < 1 || floor > numFloor && apart <= 0 && sizeArr <= 0);

        

        // Установка данных квартиры
        home.setArrApart(numApart, apart, floor, i, sizeArr);
    }

    cout << "\nИнформация о квартирах:\n\n";

    for (int i = 0; i < numApart; i++) {
        Apartment* apartment = home.getApartmentArray();

        cout << "Квартира " << apartment[i].getNumber() << " на этаже " << apartment[i].getFloor() << ":\n";

        Human* people = apartment[i].getHuman();

        for (int j = 0; j < apartment[i].getSizeArr(); j++) {
            cout << "\tЖитель " << j + 1 << ":\n";
            cout << "\tФИО: " << people[j].getFullName() << "\n";
            cout << "\tТелефон: " << people[j].getPhone() << "\n";
            cout << "\tГод рождения: " << people[j].getYear() << "\n";
        }
    }

    return 0;
}