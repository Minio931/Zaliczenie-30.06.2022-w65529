#pragma once
#include <iostream>
#include <string>

using namespace std;
class Samochod
{
	int liczba_drzwi;
	int cena;
	string imie;
	string nazwisko;
public:
	Samochod(string imie, string naziwsko, int cena);
	Samochod(int cena);
	~Samochod();
	int getCena();
	int getLiczbaDrzwi();
	string getImie();
	string getNazwisko();
	void setCena(int cena);
	void setLiczbaDrzwi(int liczba_drzwi);
	void zmienDaneWlasciciela(string imie, string nazwisko);
	void obliczPodatek(int procent, int wartosc);
	friend void operator << (ostream &wyj, Samochod s);
	void operator++(int number);
};

