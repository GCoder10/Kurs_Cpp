#include "Klasa.h"
#include <iostream>

using namespace std;

unsigned short Dane_czlowieka_class::getWiekND() // Definicja, funkcja zwraca bezznakowy (dodatni) short int (int w domy�le)
{
	return wiek_class;
}

// :: - operator zasi�gu.
void Dane_czlowieka_class::setWiekND(unsigned short age) // Definicja, procedura (nie zwraca nic), tylko ustawia.
{
	wiek_class = age;
}

// Konstruktor wywo�uje si� podczas tworzenia.
// Nadawanie pocz�tkowych warto�ci.
Dane_czlowieka_class::Dane_czlowieka_class()
{
	// Ze zmiennych globalnych nie powinno si� korzysta�
	// zmienna statyczna = pami�� na t� zmienn� zostanie zarezerwowana tylko raz.
	static int i = 1;
	cout << "Konstruktor zostal wywolany poraz: " << i++ << endl;
	
	cout << "Zostal wywolany konstruktor w Klasa.cpp" << endl;
	wiek_class = 20;
	cout << "Poczatkowa wartosc wieku: " << endl;	
	cout << wiek_class << endl;
}

Dane_czlowieka_class::Dane_czlowieka_class(int age)
{
	wiek_class = age;
}

// Destruktor
Dane_czlowieka_class::~Dane_czlowieka_class()
{
	static int j = 1;
	cout << "Destruktor zostal wywolany poraz: " << j++ << endl;
	
	cout << "Zostal wywolany destruktor w Klasa.cpp" << endl;
}
