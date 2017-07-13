#include <iostream>
#include <vector>

int main() {

	int o = 0;
	int i = 0, j = 0;
	int n, k;

	std::vector <int> osoba; //utworzenie tablicy

	std::cout << "Ilosc osob: ";
	std::cin >> n;

	std::cout << "\nIlosc krokow: ";
	std::cin >> k;

	for (i = 0; i < n; i++) osoba.push_back(i); //dodawanie nowych miejsc na ludzi
	std::cout << osoba.size(); //sprawdzenie rozmiaru tablicy
	std::cout << "\n" << osoba.empty(); //sprawdzenie, czy tablica jest pusta - niepotrzebne

	for (o; o < n; o++) std::cout << "\n\nosoba[" << o << "] " << osoba[o]; //wypisanie osób
	std::cout << "\n\nj: " << j + 1;

	while (1) {

		for (i = k; i > 1; i--) { //odejmowanie kroków

			if (j < osoba.size())j++;
			if (j == osoba.size()) j = 0;
			std::cout << "\nj: " << j + 1;  //osoba, która wyleci (liczenie)

		}
		//tu wylatuje
		std::cout << "\nTablica na osobie: " << osoba.at(j) + i;
		std::cout << "\nUsuwanie osoby: " << osoba[j] + 1;
		if (j <= osoba.size()) osoba.erase(osoba.begin() + j); //usuwanie osoby k-tej, zmniejszenie tablicy
		if (j == osoba.size()) j = 0; // jeœli usuniesz ostatni element to j wychodzi poza
									  // zakres, wiêc go ustawiam go na 1. (czyli 0)
		std::cout << "\nPo usuwaniu rozmiar: " << osoba.size();  //sprawdzenia
		std::cout << "\nPo usuwaniu pozycja: " << osoba.at(j) + 1; //j+1 bo j jest od 0, a chcemy nr osoby


		if (osoba.size() == 1) break; // jeœli zostaje 1 osoba, to wychodzimy z while'a

	}

	std::cout << "\n\nWYGRYWA: " << osoba.at(0) + 1; //wyœwietlenie zwyciêzcy
	std::cin >> n; //pauza

	return 0;
}