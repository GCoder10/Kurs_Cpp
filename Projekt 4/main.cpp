#include <iostream>
#include <string>
#include "Klasa.h"

using namespace std;

struct Dane_czlowieka //Struktura, w strukturze automatycznie wszystko jest publiczne.
{
	unsigned short wiek; // cechy, unsigned = bez znaku, same dodatnie , short (int) - 2 bajty
};

void funkcja_inline()
{
	Dane_czlowieka_class nowy_czlowieczek;
}

void funkcja_inline2()
{
	// Na tej samej zasadzie co tworzenie tablic przy pomocy wska�nik�w, np. new int,
	// pami�� zostaje zarezerwowana a� do ko�ca trwania programu lub do jej zwolnienia
	// poprzez zastosowanie delete;
	Dane_czlowieka_class * nowy_czlowieczek = new Dane_czlowieka_class[5];
	nowy_czlowieczek->setWiek(10900);
	cout << "[funkcja_inline2(),nowy_czlowieczek->setWiek(10900);]: " << endl;
	cout << nowy_czlowieczek->getWiekND() << endl;
	nowy_czlowieczek++;
	nowy_czlowieczek->setWiek(909);
	cout << "[funkcja_inline2(),nowy_czlowieczek->setWiek(909);]: " << endl;
	cout << nowy_czlowieczek->getWiek() << endl;
	
	// Powr�t na poprzedni adres jest niezb�dny, aby nie zbugowa� destruktora.
	nowy_czlowieczek--;	
	delete [] nowy_czlowieczek;
}

int main(int argc, char** argv) 
{
	funkcja_inline();
	funkcja_inline2();
	/*
		Lepiej korzysta� z klas ni� ze struktur.
		class - klasa - miejsce do tworzenia obiekt�w.
		
	*/
	
	Dane_czlowieka czlowiek;
	// Wywo�anie konstruktora z Klasa.cpp
	Dane_czlowieka_class czlowiek_class; // Obiekt utworzony na podstawie klasy, instancja klasy = obiekt.
	// Instancja - czlowiek_class =/= czlowiek_class2
	// Wywo�anie konstruktora z Klasa.cpp
	Dane_czlowieka_class czlowiek_class2; // Druga instancja
	Dane_czlowieka_class czlowiek_class3(90); // Trzecia instancja
	// Tak samo jak w przypadku polimorfizmu kompilator wie, jaki konstruktor chcemy wywo�a� dzi�ki
	// innym "parametrom", tutaj: jeden konstruktor przyjmuje int, drugi nie.
	
	
	
	czlowiek.wiek = 40;
	// czlowiek_class.wiek_class = 50;
	czlowiek_class.setWiek(29);
	
	cout << "Czlowiek wiek ze struktury czlowiek.wiek (40): " << endl;
	cout << czlowiek.wiek << endl;
	
	cout << "Czlowiek wiek z klasy czlowiek_class.getWiek()(29): " << endl;
	cout << czlowiek_class.getWiek() << endl;


	cout << "Czlowiek wiek z klasy czlowiek_class.getWiekND()(29): " << endl;
	cout << czlowiek_class.getWiekND() << endl;	
	

	cout << "[3-cia instancja] Czlowiek wiek z klasy czlowiek_class3.getWiekND()(90): " << endl;
	cout << czlowiek_class3.getWiekND() << endl;	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	// Tablica = wska�nik - nazwa tablicy.
	// Nazwa tablicy = przechowywany adres do 1-wszego elementu tablicy.
	Dane_czlowieka_class tab[10];
	tab->setWiek(10);
	cout << "[Dane_czlowieka_class tab[10]] 10: " << endl;
	cout << tab->getWiek() << endl;
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
	
	
	
	
	system("PAUSE");
	return 0;
} // Destruktor wywo�uje si�, gdy instancja przestaje istnie�, czyli tutaj.
// Destruktor zwalnia miejsce w pami�ci na inne obiekty. (zwalnia miejsce, gdzie by�y instancje).
