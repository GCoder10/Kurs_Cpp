#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury


const int ile = 5;
int tab[ile]; // Globalna (zmienna) tablica. Automatycznie jest zerowana w przeciwie�stwie do zmiennych lokalnych.

int main()
{
	/*
		Sortowanie b�belkowe - wypychanie do przodu jednego b�belka i por�wnywanie mi�dzy sob�
		nast�pnego.
		
		Dwie p�tle for - najprostsza implementacja.
		
		
		
		
		Sortowanie b�belkowe potrzebuje tzw. tablicy tymczasowej.
		
		
		Najprostszy i podstawowy.
		
		
		Sortowanie b�belkowe jest dobre tak do 5000 element�w, potem jest ju� wolne.
	*/
	// Wczytywanie warto�ci
	for (int i = 0; i < ile; i++)
	{
		cout << "Podaj " << (i + 1) << " liczbe: " << endl;
		cin >> tab[i];
		cin.ignore();
	}
	
	// Wypisywanie stanu
	cout << "Stan tablicy przed sortowaniem: " << endl;
	PokazStan();
	
	
	int temp;
	
	// Sortowanie
	/*
		Je�eli element j ma wi�ksz� warto�� od elementu nast�pnego j+1, to chcemy zamieni� je miejscami:
		1. Tymczasowa zmienna przechowuje warto�� z tablicy (1 element)
		2. Na miejsce wi�kszego elementu zostaje wpisany nast�pny, mniejszy od niego.
		3. Na miejsce mniejszego j + 1 zostaje wpisany ten wi�kszy element dzi�ki wcze�niejszemu
		zapisaniu go w zmiennej tymczasowej.
		
		Ile element�w ma tablica, tyle razy wykona si� ca�y proces sortowania.
	*/
	for (int i = 0; i < ile - 1; i++)
	{
		cout << "Sortowanie numer: " << i << endl;
		PokazStan();
		for (int j = 0; j < ile - 1; j++)
		{
			if (tab[j] > tab[j+1])
			{
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
		}
	}
	
	cout << "Stan tablicy po sortowaniu: " << endl;
	// Wypisywanie stanu
	PokazStan();
	

	getchar();
	system("PAUSE");
	return 0;
}

void PokazStan() // Definicja procedury (bo nic nie zwraca, nie ma return)
{
	cout << "Nasza tablica wyglada nastepujaco: " << endl;
	for (int i = 0; i < ile; i++)
	{
		cout << (i+1) << ". = " << tab[i] << endl;
	}
}
