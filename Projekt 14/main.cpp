#include <iostream>
#include "punkt.h"

using namespace std;

int dodaj (int zm1, int zm2) { return zm1+zm2; }
double dodaj (double zm1, double zm2) { return zm1+zm2; }
double dodaj (int zm1, double zm2) { return zm1+zm2; }
double dodaj (double zm1, int zm2) { return zm1+zm2; }


template<typename T, typename T2>
T dodajT(T zm1, T2 zm2)
{
	return zm1+zm2;
}
/*
template<>
Punkt2D dodajP(Punkt2D zm1, Punkt2D zm2)
{
	Punkt2D tmp;
	
	tmp.setX(zm1.getX() + zm2.getX());
	tmp.setY(zm1.getY() + zm2.getY());
	
	return tmp;
}
*/
int main(int argc, char** argv)
{
	/*
		Kurs cz.52 Szablony funkcji	
		Na typie danych float operacje wykonuj� si� du�o szybciej ni� na double.
		
		
		�eby nie tworzy� ci�gle deklaracji i definicji funkcji, trzeba stworzy� szablon.
		Procedura - gdy nic nie zwraca.
		template - szablon, <sami tworzymy typ danych, T>, podczas przekazywania z automatu ustawiane
		s� typy parametr�w.
		
		unsigned - bezznakowy - tylko dodatnie.
		
		Szablon tworzy funkcj� zwracaj�c� tutaj dane typu T, pierwszy parametr okre�la
		typ zwracanych danych.
		
		Mo�emy narzuci� rzutowanie dla szablonu poprzez static_cast
		
		
		dodajP - szablon do dodania dw�ch punkt�w 2D na podstawie w�asnej klasy Punkt2D
		
		Dopisany operator dodawania w klasie Punkt2D. Punkt2D operator+(Punkt2D);
		Dzi�ki temu szablon zosta� przeniesiony do klasy.
	*/
	Punkt2D p1(10, 20);
	Punkt2D p2(40, 60);
	unsigned short int a = 5;
	cout << dodaj(12,13) << endl;
	
	
	cout << "Uzycie szablonu dodajT: " << endl;
	cout << dodajT(12,13)     << endl;
	cout << dodajT(12.5,13.4) << endl;
	cout << dodajT(12.5,13)   << endl;
	cout << dodajT(12,13.2)   << endl;
	cout << dodajT(a,a)       << endl;
	cout << endl;	
	cout << endl;		
	cout << endl;		
	cout << endl;		
	cout << endl;	
	cout << dodajT(12.4,a)    << endl;
	cout << endl;	
	cout << endl;		
	cout << endl;		
	cout << endl;		
	cout << endl;
	
	cout << static_cast<int>(10.5) << endl;	
	cout << endl;	
	cout << endl;		
	cout << endl;		
	cout << endl;		
	cout << endl;	
	cout << dodajT<int, int>(10.5, 17.5) << endl;		
	cout << endl;	
	cout << endl;		
	cout << endl;		
	cout << endl;		
	cout << endl;
	cout << dodajT<double, double>(10.5, 17.5) << endl;	
	cout << endl;	
	cout << endl;		
	cout << endl;		
	cout << endl;		
	cout << endl;
	cout << endl;	
	cout << endl;		
	cout << endl;		
	cout << endl;		
	cout << endl;

	cout << "Obiekty/instancje klasy Punkt2D: " << endl;
	Punkt2D p3 = dodajT(p1, p2);
	cout << "X: ";
	cout << p3.getX() << endl;
	cout << "Y: ";
	cout << p3.getY() << endl;
	
	
	
	system("PAUSE");
	return 0;
}
