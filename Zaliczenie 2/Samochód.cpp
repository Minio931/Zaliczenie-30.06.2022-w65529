#include "Samochód.h"

Samochod::Samochod(string imie, string nazwisko, int cena)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->cena = cena;
	this->liczba_drzwi = 4;
}

Samochod::Samochod(int cena)
{
	this->imie = "";
	this->nazwisko = "";
	this->cena = cena;
	this->liczba_drzwi = 5;
}

Samochod::~Samochod()
{
	return;
}

int Samochod::getCena()
{
	return this->cena;
}

int Samochod::getLiczbaDrzwi()
{
	return this->liczba_drzwi;
}

string Samochod::getImie()
{
	return this->imie;
}

string Samochod::getNazwisko()
{
	return this->nazwisko;
}

void Samochod::setCena(int cena)
{
	this->cena = cena;
}

void Samochod::setLiczbaDrzwi(int liczba_drzwi)
{
	this->liczba_drzwi = liczba_drzwi;
}

void Samochod::zmienDaneWlasciciela(string imie, string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}

void Samochod::obliczPodatek(int procent, int wartosc)
{
	int wysokoscPodatku = 0;
	wysokoscPodatku = (wartosc * procent) / 100;
	cout << "Podatek(PCC) wynosi: " << wysokoscPodatku << endl;
}

void Samochod::operator++(int number)
{
	this->cena = this->cena + 1000;
}

// void operator << (ostream& wyj, Samochod &s) {
//	wyj << s.getNazwisko() <<endl;
//	wyj << s.getImie() << endl;
//	wyj << s.getCena() <<endl;
//	wyj << s.getLiczbaDrzwi() << endl;
//	
//}

 void operator<<(ostream& wyj, Samochod s)
 {
	 wyj << s.getNazwisko() << endl;
	 wyj << s.getImie() << endl;
	 wyj << s.getCena() << endl;
	 wyj << s.getLiczbaDrzwi() << endl;
	 
 }
