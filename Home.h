#pragma once
#include "Apartment.h"
#include "Human.h"

class Home {
    Apartment* apartmentArr;
    int numApart;
    int numFloor;

public:
    Home() :Home(1, 1) {}
    explicit Home(int numApart_p) :Home(numApart_p, 1) {}
    explicit Home(int numApart_p, int numFloor_p) {
        if (numApart_p < 1 || numFloor_p < 1)
            exit(368); // Ошибка: неверные размеры данных

        numApart = numApart_p;
        apartmentArr = new Apartment[numApart];
        numFloor = numFloor_p;
    }
    // Используем побитовое копирование
    Home(const Home& obj) {
        *this = obj; 
    }
    // Побитовое копирование
    Home& operator=(const Home& obj) {
        if (this != &obj) {
            delete[] apartmentArr;

            numApart = obj.numApart;
            numFloor = obj.numFloor;
            apartmentArr = obj.apartmentArr; 
        }
        return *this;
    }

    void setArrApart(int numApart_p, int apartNumber_p, int floor_p, int i);
    void setNumFloor(int numFloor_p);
    Apartment* getApartmentArray() const;


    ~Home() {
        delete[] apartmentArr;
    }
};

