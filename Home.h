#pragma once
#include "Apartment.h"
#include "Human.h"

class Home
{
	Apartment* apartmentArr;
	int numApart;
	int numFloor;

public:
	Home() :Home(0, 0) {}
	explicit Home(int numApart_p) :Home(numApart_p, 0) {}
	explicit Home(int numApart_p, int numFloor_p) {
		if(numApart_p < 0 && numFloor_p < 0)
			exit(368); //Ошибка: введен неверный размер данных
		
		numApart = numApart_p;
		apartmentArr = new Apartment[numApart];

		if (numFloor_p < 0)
			exit(368); //Ошибка: введен неверный размер данных

		numFloor = numFloor_p;
	}

	Home(Home& obj) {
		numApart = obj.numApart;
		numFloor = obj.numFloor;
		
		apartmentArr = new Apartment[numApart];

		for (int i = 0;i < numApart;i++) {
			apartmentArr[i] = obj.apartmentArr[i];
		}
	}

	void setArrApart(int numApart_p, int apartNumber_p, int floor_p, int i);
	void setNumFloor(int numFloor_p);

	~Home() {
		delete[]apartmentArr;
	}
};

