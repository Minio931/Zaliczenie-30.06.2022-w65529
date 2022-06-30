

#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <cstdlib>
#include <string>
#include "Samochód.h"
#include <cmath>

using namespace std;

template<class A, int rozmiar>
class Tablica {
	A* arr = new A[rozmiar];
public:
	void set (A elem, int index) {
		arr[index] = elem;
	}
	void get(int index) {
		cout << arr[index] << endl;
	}
};

template<>
class Tablica<bool> {
	
};
int main()
{

	Tablica<int, 20> arr;

	arr.set(2, 20);
	arr.get(20);
	/*Samochod alfa("Magdalena", "Bogucka", 5000);
	Samochod golf(2000);
	Samochod mercedes("Andrzej", "Nowak", 100000);

	mercedes.setCena(300000);
	golf.zmienDaneWlasciciela("Dominik", "Chmielowski");


	cout << "Ktory samochod jest drozszy alfa czy mercedes:" << (alfa.getCena() < mercedes.getCena()) ? "mercedes" : "alfa";
	cout << endl;
	cout << "Ile Drzwi ma: " << endl;
	cout << "Alfa: " << alfa.getLiczbaDrzwi() << endl;
	cout << "Golf: " << golf.getLiczbaDrzwi() << endl;
	cout << "Mercedes: " << mercedes.getLiczbaDrzwi() << endl;

	cout << "Podatki Samochodow: " << endl;
	cout << "Alfa:";
	alfa.obliczPodatek(23, alfa.getCena());
	cout << "Golf:";
	golf.obliczPodatek(23, golf.getCena());
	cout << "Mercedes:";
	mercedes.obliczPodatek(23, mercedes.getCena());
	cout << mercedes;
	mercedes++;
	cout << mercedes;
	vector<Samochod> samochody;
	int cena;
	for (int i = 0; i < 10; i++) {
		cena = floor(rand() % 10000 + 1);
		Samochod s(cena);
		samochody.push_back(s);
	}
	cout << "Wyswietlenie vektora: " << endl;
	for (auto s : samochody) {
		cout << s;
		s++;
		cout << s;
	}*/
}

