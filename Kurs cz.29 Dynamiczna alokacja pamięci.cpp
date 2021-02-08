#include <iostream>

using namespace std;

// Zmienna globalna, automatycznie 0 - wana przy braku startowej warto�ci.
const int ROZMIAR = 10;


int main()
{
	/*
		Alokacja - przydzielanie
		Dynamiczne przydzielanie pami�ci
	*/
	// Kompilator z g�ry rezerwuje 40 bajt�w:
	int tab[10];
	int tab2[ROZMIAR];
	
	// "Dynamicznie" - �le:
	int ile;
	cout << "Podaj wielkosc tablicy tab3: " << endl;
	cin >> ile;
	int tab3[ile];
	cout << &tab3[0] << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	// -----------------------------
	// new - zarezerwuj miejsce w pami�ci
	// int, double itp - wie, ile zarezerwowa� i od razu ustawi 1-wsz� warto��, nie jak wcze�niej.
	// new int; zarezerwowane poza naszym programem, ale mamy pewno��, �e tam nic nie ma (np. 
	// z innego programu).
	
	//new int;
	cout << "Adres new int: " << new int << endl;
	cout << "Wartosc pod adresem new int: " << *(new int) << endl;
	
	// Tak jak na poprzedniej lekcji, 2 sposoby na odwo�ywanie si� do element�w tablicy, jeden z nich,
	// poprzez wska�nik.
	// 4 bajty
	int *wsk = new int;
	*wsk = 20;
	cout << "new int i modyfikacja wartosci pod tym adresem na 20: " << *wsk << endl;
	cout << "Ponownie wartosc pod new int, to juz cos nowego, brak etykiety, zeby odwolac sie bezposrednio: " << *(new int) << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	// Taka sama reakcja jak w zmiennych lokalnych:
	if (10)
	{
		int *wsk2 = new int;
		*wsk2 = 560;
		cout << "*wsk2 w if'ie: " << *wsk2 << endl;
	}
	// cout << *wsk2 << endl; - b��d, teraz *wsk2 istnieje w if'ie tylko
	// Mimo wszystko rezerwacja new int dzia�a a� do zamkni�cia programu.
	
	
	int a = 20;
	// Dlatego powinno si� zwalnia� pami�� po takim if'ie:
	if (10)
	{
		// Je�eli nie mamy wystarczaj�co wolno pami�ci, to adres zwracany przez new typ_danej jest r�wny NULL
		// Trzeba jak w tablicy zarezerwowa� wszystkie warto�ci obok siebie.
		int *wsk3 = new int;
		*wsk3 = 600;
		cout << "*wsk3 w if'ie: " << *wsk3 << endl;
		delete wsk3; // zwolnienie pami�ci na kt�r� wskazuje wska�nik wsk3
		// Sam wska�nik wsk3 nadal zostaje i mo�e nadal na co� nowego wskazywa�.
		// wsk3 nadal wskazuje na wyczyszczone miejsce i mo�na tak co� nadpisa�.
		// *wsk3 = 4500;
		wsk3 = &a;
		cout << "*wsk3 z a w if'ie: " << *wsk3 << endl;
		wsk3 = NULL; // Pustka, 0-we miejsce w pami�ci, nic.
		// nie mo�na wy�uska� z adresu �adnego.
		
		
		// Gdyby nie delete, przy pomocy wska�nika p mo�na by co� podmieni� w miejscu, na kt�re 
		// wskazuje wsk3
		int *p = new int;
		*p = 40;
		cout << p     << endl;
		if (wsk3 != NULL) cout << wsk3           << endl;
		if (wsk3 == NULL) cout << "Brak pamieci albo wskazywanie na nic" << endl;
		cout << *p    << endl;
		if (wsk3 != NULL) cout << *wsk3 << endl;
		if (wsk3 == NULL) cout << "Brak pamieci albo wskazywanie na nic" << endl;
		delete p;
	}
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	// 40 bajt�w pod rz�d ustawionych w pami�ci potrzeba:
	// Jakby nie by�o to taki new int zwraca NULL, czyli brak pami�ci.
	// tab[0] == *(tab) - oba wskazuj� na 1-wszy element tablicy.
	int *tab4 = new int[10];
	
	tab4[0] = 10;
	tab4[1] = 105;
	cout << "tab4[0]: = 10 "       << tab4[0]     << endl;
	cout << "*(tab4): = 10 "       << *(tab4)     << endl;
	cout << "*(tab4 + 1): = 105  " << *(tab4 + 1) << endl;
	cout << "tab4[1]: = 105 "      << tab4[1]     << endl;
	// Na koniec, gdy ju� nie potrzebujemy pami�ci:
	// delete [] tab4;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Dynamiczna tablica: "    << endl;
	int ile2;
	cout << "Wielkosc tablicy tab5: " << endl;
	cin >> ile2;
	int *tab5 = new int[ile2];
	// new int zwraca adres do pierwszego elementu tablicy, kt�ra jest szeregiem.
	// [] - zwalniamy dla wielu zmiennych a nie tylko dla jednej pami��.
	// delete [] tab5;
	
	
	
	system("pause");
	return 0;
}
