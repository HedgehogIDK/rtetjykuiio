#include "Human.h"

void Human::setFullName(const char* fullName_p) {
	if (fullName)
		delete[]fullName;

	fullName = new char[strlen(fullName_p) + 1];
	strcpy_s(fullName, strlen(fullName_p) + 1, fullName_p);
}

void Human::setYear(int year_p) {
	year = year_p;
}

void Human::setPhone(const char* Phone_p) {
	strcpy_s(Phone, SIZEPhone, Phone_p);
}

int Human::getYear()const {
	return year;
}

const char* Human::getFullName()const {
	return fullName;
}

const char* Human::getPhone()const {
	return Phone;
}