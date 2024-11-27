#include "Apartment.h"

void Apartment::setHuman() {
	char bufferStr[SIZE];
	int buffer;
	int size;
	
	size = getSizeArr();

	for (int i = 0;i < size;i++) {
		cout << "\nВведите ФИО: ";
		cin.ignore();
		gets_s(bufferStr, SIZE);
		humanArr[i].setFullName(bufferStr);

		cout << "\nВведите телефон: ";
		cin.ignore();
		gets_s(bufferStr, SIZE);
		humanArr[i].setPhone(bufferStr);

		cout << "\nВведите год рождения: ";
		cin >> buffer;
		humanArr[i].setYear(buffer);
	}
}
void Apartment::setSizeArr(int sizeArr_p) {
	sizeArr = sizeArr_p;
}

int Apartment::getSizeArr()const  {
	return sizeArr;
}

void Apartment::setNumber(int number_p) {
	number = number_p;
}

void Apartment::setFloor(int floor_p) {
	floor = floor_p;
}

Human* Apartment::getHuman() const {
	return humanArr;
}

int Apartment::getFloor() const{
	return floor;
}

int Apartment::getNumber() const{
	return number;
}
