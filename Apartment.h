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
    Apartment(int number_p, int floor_p) : Apartment(number_p, floor_p, 2) {}
    Apartment(int number_p, int floor_p, int sizeArr_p) {
        if (sizeArr_p > 0) {
            sizeArr = sizeArr_p;
            humanArr = new Human[sizeArr];
        }
        else {
            exit(367); // Îøèáêà: íåâåðíûé ðàçìåð ìàññèâà
        }

        if (number_p > -1) {
            number = number_p;
        }
        else {
            exit(368); // Îøèáêà: íåâåðíûå äàííûå
        }

        if (floor_p > -1) {
            floor = floor_p;
        }
        else {
            exit(368); // Îøèáêà: íåâåðíûå äàííûå
        }
    }
    // Èñïîëüçóåì ïîáèòîâîå êîïèðîâàíèå
    Apartment(const Apartment& Apart) {
        *this = Apart; 
    }
    // Ïîáèòîâîå êîïèðîâàíèå
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

