#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury



const int ile = 4;
int tab[ile];


int main()
{
	/*
		Wybieramy warto�� minimaln� i przesuwamy j� na sam pocz�tek.
	*/
	
	// Pobieranie danych od u�ytkownika do tablicy.
	for (int i = 0; i < ile; i++)
	{
		cout << "Podaj " << (i+1) << " liczbe: " << endl;
		cin >> tab[i];
		cin.ignore();
	}

	cout << "Tablica po wczytaniu wszystkiego: " << endl;
	PokazStan();
	
	// t - tmp - tymczasowo zapami�tywanie, gdzie znajduje si� minimalna liczba.
	int k, t;
	
	/*
		Ile ma element�w tablica, tyle razy b�dzie por�wnywanie element�w ( - 1).
		
		1. Czy sprawdzany element jest mniejszy od tego trzymanego k w danym obrocie p�tli.
		2. Je�eli tak, to tab[j] b�dzie tym minimalnym.
		3. Tymczasowa zmienna t przechowuje warto�� 1-wszego elementu.
		4. Najmniejszy element jest wpisywany w 0 miejsce w tablicy.
		5. Na miejsce z przeniesienia l�duje element z 0 miejsca.
	*/
	for(int i = 0; i < ile - 1; i++)
	{
		cout << "Tablica po sortowaniu przez wybor, krok nr." << (i+1) << " :" << endl;
		PokazStan();
		k = i;
		for(int j = i + 1; j < ile; j++)
		{
			if (tab[j] < tab[k])
				k = j;
		}
		t = tab[i];
		tab[i] = tab[k];
		tab[k] = t;
	}
	
	
	cout << "Tablica po sortowaniu przez wybor: " << endl;
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
