#pragma once
#include "Apartment.h"
#include "Human.h"

class Home {
    Apartment* apartmentArr;
    int numApart;
    int numFloor;

public:
    //Конструкторы
    Home() :Home(1, 1) {}
    explicit Home(int numApart_p) :Home(numApart_p, 1) {}
<<<<<<< HEAD
    Home(int numApart_p, int numFloor_p);

    //Конструктор копирования
    Home(const Home& obj);
=======
    Home(int numApart_p, int numFloor_p) {
        if (numApart_p < 1 || numFloor_p < 1)
            exit(368); // ГЋГёГЁГЎГЄГ : Г­ГҐГўГҐГ°Г­Г»ГҐ Г°Г Г§Г¬ГҐГ°Г» Г¤Г Г­Г­Г»Гµ

        numApart = numApart_p;
        apartmentArr = new Apartment[numApart];
        numFloor = numFloor_p;
    }
    // Г€Г±ГЇГ®Г«ГјГ§ГіГҐГ¬ ГЇГ®ГЎГЁГІГ®ГўГ®ГҐ ГЄГ®ГЇГЁГ°Г®ГўГ Г­ГЁГҐ
    Home(const Home& obj) {
        *this = obj; 
    }
    // ГЏГ®ГЎГЁГІГ®ГўГ®ГҐ ГЄГ®ГЇГЁГ°Г®ГўГ Г­ГЁГҐ
    Home& operator=(const Home& obj) {
        if (this != &obj) {
            delete[] apartmentArr;
>>>>>>> 79e62f508890a2f782720cab6d0e42df11d17e31

    //Методы и акссесоры
    void setArrApart(int numApart_p, int apartNumber_p, int floor_p, int i, int sizeArr_p);
    void setNumFloor(int numFloor_p);
    Apartment* getApartmentArray() const;

    ~Home() {
        delete[] apartmentArr;
    }
};

