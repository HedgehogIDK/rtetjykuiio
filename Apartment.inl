#include "Apartment.h"

Apartment::Apartment(int number_p, int floor_p, int sizeArr_p) {
    if (sizeArr_p > 0) {
        sizeArr = sizeArr_p;
        humanArr = new Human[sizeArr];
    }
    else {
        exit(367); // Ошибка: неверный размер массива
    }

    if (number_p > -1) {
        number = number_p;
    }
    else {
        exit(368); // Ошибка: неверные данные
    }

    if (floor_p > -1) {
        floor = floor_p;
    }
    else {
        exit(368); // Ошибка: неверные данные
    }
}

Apartment::Apartment(const Apartment& Apart) {
    if (this != &Apart) {
        number = Apart.number;
        floor = Apart.floor;
        sizeArr = Apart.sizeArr;
        humanArr = Apart.humanArr;
    }
}