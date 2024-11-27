#include "Home.h"

Home::Home(int numApart_p, int numFloor_p) {
    if (numApart_p < 1 || numFloor_p < 1)
        exit(368); // Ошибка: неверные размеры данных

    numApart = numApart_p;
    apartmentArr = new Apartment[numApart];
    numFloor = numFloor_p;
}

Home::Home(const Home& obj) {
    if (this != &obj) {
        delete[] apartmentArr;

        numApart = obj.numApart;
        numFloor = obj.numFloor;
        apartmentArr = obj.apartmentArr;
    }
}