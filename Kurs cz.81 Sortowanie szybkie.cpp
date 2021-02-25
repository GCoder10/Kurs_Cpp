#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury



const int ile = 5;
int tab[ile];


int main()
{
	/*
		Sortowanie szybkie - szybko sortuje.
		
		1. Dzielenie tablicy na dwie cz�ci. Po �rodku wybieramy piwot.
		2. Piwot podmieniamy z ostatni� cyfr� tablicy ostatniej.
		3. Wszystkie liczby por�wnujemy z piwotem.
		4. Liczby nie wi�ksze od piwotu l�duj� po lewej stronie.
		5. Liczby wi�ksze od piwotu l�duj� po prawej stronie.
		6. Algorytm jest wykonywany rekurencyjnie, od lewej strony do j-1, -1, bo nie mo�emy
		bra� pod uwag� miejsca, gdzie jest piwot.
		7. Od j+1 do prawej strony, rekurencyjnie jest to wszystko wykonywane.
		
		Rekurencyjnie - czyli funkcja jest wywo�ywana w funkcji.
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
	
	/*
				
	*/

	

	
	
	cout << "Tablica po szybkim sortowaniu: " << endl;
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
