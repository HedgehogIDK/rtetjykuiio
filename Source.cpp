#include <iostream>
#include "Home.h"
#include "Apartment.h"
#include "Human.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int numApart, numFloor, floor, apart;
	Home home;

	cout << "¬ведите кол - во квартир: ";
	cin >> numApart;

	cout << "\n¬ведите кол - во этажей: ";
	cin >> numFloor;

	home.setNumFloor(numFloor);

	for (int i = 0; i < numApart;i++) {
		cout << "\n¬ведите этаж: ";
		cin >> floor;
		cout << "\n¬ведите номер квартиры: ";
		cin >> apart;

		home.setArrApart(numApart, apart, floor, i);
	}

	return 0;
}