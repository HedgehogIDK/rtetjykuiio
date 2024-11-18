#pragma once
#include "Apartment.h"

class Home
{
	Apartment* apartmentArr;
	int sizeApart;
	int numApart;
	int numFloor;

public:
	Home() :Home(1, 0, 0) {}
	explicit Home(int size):Home(size,0,0){}
	explicit Home(int size, int numApart_p) :Home(size, numApart_p, 0) {}
	explicit Home(int size, int numApart_p, int numFloor_p) {
		if (size > 0)
			exit(367); // Ошибка: введен неверный размер массива

		sizeApart = size;
		apartmentArr = new Apartment[sizeApart];

		if(numApart_p < 0)
			exit(368); //Ошибка: введен неверный размер данных
		
		numApart = numApart_p;

		if (numFloor_p < 0)
			exit(368); //Ошибка: введен неверный размер данных

		numFloor = numFloor_p;
	}

	Home(Home& obj) {
		sizeApart = obj.sizeApart;
		numApart = obj.numApart;
		numFloor = obj.numFloor;
		
		apartmentArr = new Apartment[sizeApart];

		for (int i = 0;i < sizeApart;i++) {
			apartmentArr[i] = obj.apartmentArr[i];
		}
	}

	void setSizeApart();
	void setNumApart();
	void setNumFloor();

};

