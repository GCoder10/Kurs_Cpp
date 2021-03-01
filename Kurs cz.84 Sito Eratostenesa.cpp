#include <iostream>

using namespace std;

int main()
{
	/*
		Sito Eratostenesa wyszukuje liczby pierwsze, robi to w spos�b o wiele szybszy ni� algorytmy
		zastosowane do tej pory, gdy� u�ywa dodawania.
		
		bool tab[1000];
		tablica = wska�nik, bo nazwa tablicy jest wska�nikiem wskazuj�cym na adres 
		pierwszego elementu w tablicy, wi�c &tab = &tab[0].
		new bool dla dynamicznej alokacji pami�ci dla tablicy.
		Obok siebie miejsce b�dzie zarezerwowane dla 1000 element�w.
		W przypadku braku mo�liwo�ci znalezienia miejsca, new bool zwr�ci NULL.
		
		Mo�na by u�y� vectora, ale w tym przypadku trzeba u�ywa� iteratora, jako obiektu znaj�cego
		adresy wszystkich element�w w kontenerze (vectorze), dane nie musz� mie� zarezerwowanego miejca
		obok siebie w jednym bloku w pami�ci z uwagi na specyfik� kontener�w.
		Ale zamiast zwraca� NULL w przypadku braku mo�liwo�ci rezerwacji miejsca obok siebie dla 1000 
		element�w, vector nie zwr�ci NULL'a tylko zarezerwuje pami�� gdzie indziej dodatkowo.
	*/
	bool tab[1000]; // Tablica typu bool przechowuj�ca 1000 warto�ci true/false
	unsigned int i, w, ile;
	
	cout << "Do jakiej liczby mam wypisywac liczby pierwsze? ";
	cin >> ile;
	cin.ignore(); // Ignorowanie entera w buforze wprowadzania danych.
	
	
	/*
		W tablicy nadawane s� warto�ci TRUE dla element�w, w zale�no�ci, ile
		Np. ile = 500;
		
		Od tab[2] (na 3-ciej pozycji) = TRUE i tak do tab[502]
		
		
		Druga p�tla:
			w = 3
			dop�ki w <= ile podano dop�ty tab[w] = false;
			
			tab[2] = true
			tab[3] = false i = 2
			w = 5
			w <= ile
			tab[5] = false
			
			w = 7
			tab[7] = false
			
			w = 9
			tab[9] = false
			
			...
			
			
		Oznaczanie liczb pierwszych przy pomocy tablicy typu bool
		false = nie jest liczba pierwsza
		true = jest liczba pierwsza	
		
		
		
		Trzecia p�tla:
			Wypisywanie liczb pierwszych z tak uzyskanej tablicy typu bool
			Je�eli na tab[i] = true, to wypisanie i
	*/	
	if(ile > 1000)
		cout << "Podales zbyt duzo liczb";
	else
	{
		for (i = 2; i <= ile; i++)
			tab[i] = true;
				
		for (i = 2; i <= ile; i++)
		{
			if ((i != 2) && (i % 2 == 0))
				i++;
				
			w = i + i;
			while(w <= ile)
			{
				tab[w] = false;
				w += i;
			}
		}
	}
	
	
	for (i = 2; i <= ile; i++)
		if (tab[i])
			cout << i << ", ";


	getchar();
	system("PAUSE");
	return 0;
}
