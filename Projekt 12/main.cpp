#include <iostream>
#include "farma.h"

using namespace std;

void glos(Zwierze *wsk); // Procedura, deklaracja, parametrem jest wska�nik przechowuj�cy adres do
// obiektu/instancji typu Zwierze.
void glos(Zwierze &ref); // parametr: referencja, adres do obiektu/instancji.

int main(int argc, char** argv) 
{
	/*
		Kurs cz.50 Polimorfizm, funkcje wirtualne, klasy abstrakcyjne		
	*/
	
	Zwierze animal;
	Mucka cow;
	Pies dog;
	Kogut rooster;
	
	// Zwierze: klasa abstrakcyjna, ale wska�nik mo�na u�y�
	Zwierze *wsk;
	
	animal.dajGlos();
	cow.dajGlos();
	dog.dajGlos();
	rooster.dajGlos();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Wskaznik przechowujacy adres obiektu,instancji animal klasy Zwierze: " << endl;
	Zwierze *wsk_na_zwierze = &animal;
    wsk_na_zwierze->dajGlos();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	// Klasy pochodne dziedzicz� po klasie bazowej Zwierze, dlatego ten sam wska�nik 
	// mo�e wskazywa� na niby inne klasy, ale ostatecznie te klasy dziedzicz� klas�
	// Zwierze, wi�c wska�nik mo�e by� ci�gle typu danych Zwierze.
	cout << "Wskaznik przechowuje wartosc, adres obiektu,instancji cow klasy Mucka." << endl;
	wsk_na_zwierze = &cow;
	wsk_na_zwierze->dajGlos();
	// zawsze wywo�ywana jest metoda z klasy bazowej.
	// virtual void dajGlos() - dzi�ki temu ten sam wska�nik wywo�a odpowiednie ju� funkcje 
	// dla klas pochodnych.
	// Kompilator wtedy szuka, czy przypadkiem co� nie przeci��a funkcji dajGlos().
	/*
		Polimorfizm - wielopostaciowo��, czyli przy pomocy jednego wska�nika mo�emy teraz
		wskazywa� na wiele metod z klas pochodnych. (dziedzicz�cych z klasy bazowej tej samej).
		Operacje na wska�nikach s� du�o szybsze od np. referencji.
	*/
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
	cout << endl;
	cout << endl;
	cout << "Wyslanie adresu do obiektu/instancji typu danych Zwierze do procedury glos: " << endl;
	cout << "Klasy pochodnej od klasy Zwierze: " << endl;
	glos(&rooster);
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
	cout << endl;
	cout << endl;
	cout << "Wyslanie adresu do obiektu/instancji typu danych Zwierze do procedury glos: " << endl;
	cout << "Klasy pochodnej od klasy Zwierze: " << endl;
	glos(&dog);			
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
	cout << endl;
	cout << endl;
	cout << "Przekazanie referencji dog do procedury glos: " << endl;
	cout << "Klasy pochodnej od klasy Zwierze: " << endl;
	cout << "Kompilator rozpoznaje, o ktora procedure chodzi - roznica w parametrach: " << endl;
	cout << "Przeciazenie, polimorfizm: " << endl;
	glos(dog);	
	
	
	
	system("PAUSE");
	return 0;
}

void glos(Zwierze *wsk) // Definicja procedury
{
	wsk->dajGlos();
}

void glos(Zwierze &ref)
{
	ref.dajGlos();
}
