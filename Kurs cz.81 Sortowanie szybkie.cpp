#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury
void Sort(int, int);


const int ile = 5;
int tab[ile] = {5, 60, 10, 40, 3}; // Globalna definicja tablicy, piwot tutaj = 10


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
	cout << "Tablica po wczytaniu wszystkiego: " << endl;
	PokazStan();
	
	/*
			Sortowanie w procedurze Sort:
				1. Przyjmuje lewy index, czyli = 0, prawy = 4.
				2. i = 2.
				3. piwot = tab[i], czyli obliczony �rodek tablicy. (0 + 4) / 2
				4. tab[i] = tab[prawy], czyli na miejsce �rodka tablicy wskakuje jej skrajnie 
				prawy element.
				5. P�tla for, od 0 do 4 (prawy).
					- Do p�ki spotykane elementy tablicy w p�tli s� mniejsze od piwota, to
					t - temp - zmienna tymczasowa, przyjmuje warto�� i tablicy.
					tab[i] element zamieniany na tab[j] (na pocz�tku tab[0]).
					na miejscu tab[j] wkracza t, czyli tab[i]
					j++, w nast�pnym wypadku u�ycia tej instrukcji warunkowej if, b�dzie
					brany pod uwag� 
							Piwot = 10;
							// 1.
							j = 0
							// tab[i]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       60      3      40      3	
							t = 5
							tab[i] = tab[0] = 5
							tab[j] = tab[0] = 5
							j++;
							
							// 2.
							j = 1
							// tab[i]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      60      40      3	
							t = tab[2] = 3
							tab[i] = tab[j] = 60
							tab[j] = t = 3
							j++;	
							
							
							// 3.
							j = 2
							// tab[i]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      3      40      60	
							t = tab[i] = tab[4] = 3
							tab[i] = tab[j] = 60
							tab[j] = t = 3
							j++;						
							
							Elementy r�wne, wi�ksze od piwotu nie s� tutaj brane pod uwag�.
							j = 3
				6. Skrajnie prawy element staje si� tab[j], czyli tutaj:
							tab[4] = tab[3] = 40
							tab[4] = 40
	
							// tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      3      40      60								
							
							// tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      3      10      40
							tab[j] = piwot = 10
							
				7. Instrukcje warunkowe if:
				
					if(lewy < j - 1)         0 < 2
						Sort(lewy, j - 1)
						
					Sort(0, 2)
					
						    // tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      3      10      40
					
						
						
					if(j + 1 < prawy)        4 < 4
						Sort(j+1, prawy);
						
					W kroku nr. 7 wyst�puje rekurencja - wywo�ywanie funkcji (procedury) przez
					sam� siebie.
						
						
			Tutaj procedury mia�y dost�p do tablicy znajduj�cej si� poza nimi bez u�ywania
			referencji/wska�nik�w z uwagi na fakt, �e zosta�a ona zdefiniowana jako globalna.
			
			
			
			Nawet je�eli w trakcie sortowania ju� wyjdzie posortowana tablica to program i tak
			wykonuje si� dalej a� do ostatniej rekurencji.
	*/
	Sort (0, ile - 1); // nie 5 tylko 4 index max, wi�c musi by� -1
	

	
	
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

void Sort(int lewy, int prawy)
{
	int i, j, t, piwot;
	
	i = (lewy + prawy) / 2;
	
	piwot = tab[i];
	tab[i] = tab[prawy];
							// 1.
							// tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       60      10      40      3
							
							
							// 2.
							// tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       60      3      40      3
							
	for (j = i = lewy; i < prawy; i++)
	{
		if(tab[i] < piwot)
		{
			t = tab[i];
			tab[i] = tab[j];
			tab[j] = t;
			j++;
		}
	}
	
	
	tab[prawy] = tab[j];
	tab[j] = piwot;
	
	
	
	if(lewy < j - 1)
		Sort(lewy, j - 1);
		
		
		
	if(j + 1 < prawy)
		Sort(j+1, prawy);
							
}
