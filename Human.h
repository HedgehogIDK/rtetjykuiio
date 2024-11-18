#pragma once
#include <iostream>

using namespace std;

class Human
{
	char* fullName;
	int year;
	char* Phone;
public:
	Human() :Human(nullptr, nullptr, 0) {}
	explicit Human(const char* fullName_p) :Human(fullName_p, nullptr, 0) {}
	explicit Human(const char* fullName_p, const char* Phone_p):Human(fullName_p, Phone_p, 0) {}
	explicit Human(const char* fullName_p, const char* Phone_p, int year_p) :year{ year_p } {
		if (fullName_p == nullptr) {
			fullName = nullptr;
		}
		else {
			delete[]fullName;

			fullName = new char[strlen(fullName_p) + 1];
			strcpy_s(fullName, strlen(fullName_p) + 1, fullName_p);
		}
		if (Phone_p == nullptr) {
			Phone = nullptr;
		}
		else {
			delete[]Phone;

			Phone = new char[strlen(Phone_p) + 1];
			strcpy_s(Phone, strlen(Phone_p) + 1, Phone_p);
		}
	}
	Human(const Human& human_p) {
		year = human_p.year;

		if (fullName) 
			delete[]fullName;
		
		fullName = new char[strlen(human_p.fullName) + 1];
		strcpy_s(fullName, strlen(human_p.fullName) + 1, human_p.fullName);

		if (Phone)
			delete[]Phone;

		Phone = new char[strlen(human_p.Phone) + 1];
		strcpy_s(Phone, strlen(human_p.Phone) + 1, human_p.Phone);
	}

	void setFullName(const char* fullName_p);
	void setYear(int year_p);
	void setPhone(const char* Phone_p);
	int getYear()const;
	const char* getFullName()const;
	const char* getPhone()const;

	~Human() {
		delete[]Phone;
		delete[]fullName;
	}
};

