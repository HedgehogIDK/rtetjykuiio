#pragma once
#include "Human.h"
#define SIZE 100

class Apartment
{
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
			exit(367); // Ошибка: введен неверный размер массива
		}
		if (number_p > -1) {
			number = number_p;
		}
		else {
			exit(368); //Ошибка: введен неверный размер данных
		}
		if (floor_p > -1) {
			floor = floor_p;
		}
		else {
			exit(368); //Ошибка: введен неверный размер данных
		}
	}

	Apartment(const Apartment& Apart) {
		floor = Apart.floor;
		number = Apart.number;
		sizeArr = Apart.sizeArr;

		humanArr = new Human[sizeArr];

		for (int i = 0;i < sizeArr;i++) {
			humanArr[i] = Apart.humanArr[i];
		}
	}

	void setHuman();

	void setNumber(int number_p);

	void setFloor(int floor_p);

	Human* getHuman()const;

	int getFloor()const;

	int getNumber()const;

	~Apartment() {
		delete[]humanArr;
	}
};

