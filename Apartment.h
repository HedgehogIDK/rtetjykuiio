#pragma once
#include "Human.h"
#define SIZE 100

class Apartment {
    Human* humanArr;
    int sizeArr;
    int number;
    int floor;

public:
    Apartment() :Apartment(0, 0, 2) {}
    explicit Apartment(int number_p) :Apartment(number_p, 0, 2) {}
    explicit Apartment(int number_p, int floor_p) : Apartment(number_p, floor_p, 2) {}
    explicit Apartment(int number_p, int floor_p, int sizeArr_p) {
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
    // Используем побитовое копирование
    Apartment(const Apartment& Apart) {
        *this = Apart; 
    }
    // Побитовое копирование
    Apartment& operator=(const Apartment& Apart) {
        if (this != &Apart) {
            delete[] humanArr;

            number = Apart.number;
            floor = Apart.floor;
            sizeArr = Apart.sizeArr;
            humanArr = Apart.humanArr; 
        }
        return *this;
    }

    void setHuman();
    void setNumber(int number_p);
    void setFloor(int floor_p);
    Human* getHuman() const;
    int getFloor() const;
    int getNumber() const;
    int getSizeArr() const;

    ~Apartment() {
        delete[] humanArr;
    }
};

