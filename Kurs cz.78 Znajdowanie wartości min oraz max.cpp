#include <iostream>

using namespace std;

int main()
{
	/*
		min 1-wszy spos�b
	*/
	const int ile = 5;
	int tab[ile], minx;
	
	
	// Wczytywanie liczb podawanych przez u�ytkownika do tablicy.
	/*
		Je�eli dopiero podajemy 1-wszy element, to staje si� on tym minimalnym,
		je�eli nowy element oka�e si� mniejszym od tego zapisanego, to staje si� on
		nowym najmniejszym elementem.
	*/
	for (int i = 0; i < ile; i++)
	{
		cout << "Podaj liczbe " << (i+1) << ": " << endl;
		cin >> tab[i];
		cin.ignore();
		if (i == 0)
		{
			minx = tab[i];
		} 
		else if (tab[i] < minx)
		{
			minx = tab[i];
		}
	}
	
	cout << "Minimalna liczba z podanych to: " << minx << endl;
	
	
	
	/*
		min 2-gi spos�b
	*/	
	const int ile2 = 5;
	int tab2[ile2], k = 0; // Zmienne lokalne musz� mie� od razu przypisan� warto��, aby unikn�� przechowywania
	// losowych rzeczy z pami�ci. Zmienne globalne maj� automatycznie nadawane zera.
	
	/*
		1. Zape�niamy ca�� tablic� danymi podawanymi przez u�ytkownika.
		2. Sprawdzanie, czy element na pozycji i tablicy jest mniejszy od elementu k tablicy.
		3. Je�eli tak, to k przyjmuje indeks i
		4. Czyli wychodzi ostatecznie na to, �e tab[i] jest najmniejszym elementem teraz.
	*/	
	for (int i = 0; i < ile2; i++)
	{
		cout << "Podaj " << (i+1) << " element: " << endl;
		cin >> tab2[i];
		cin.ignore();
	}
	
	
	for (int i = 1; i < ile2; i++)
		if (tab2[i] < tab2[k])
			k = i;
	
	
	cout << "Minimalna liczba drugim sposobem: " << tab2[k] << endl;
	cout << "Tablica ta posiada indeks: " << k << endl;
	cout << "Zostala ona wpisana jako: " << (k+1) << endl;
	
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
	/*
		max 1-wszy spos�b
	*/	
	const int ile3 = 5;
	int tab3[ile3], maxx;
	
	for (int i = 0; i < ile3; i++)
	{
		cout << "Podaj liczbe " << (i+1) << ": " << endl;
		cin >> tab3[i];
		cin.ignore();
		if (i == 0)
		{
			maxx = tab3[i];
		} 
		else if (tab3[i] > maxx)
		{
			maxx = tab3[i];
		}
	}
	
	cout << "Maksymalna liczba z podanych to: " << maxx << endl;


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
	
	/*
		max 2-gi spos�b
	*/	
	const int ile4 = 5;
	int tab4[ile4], k2 = 0;

	for (int i = 0; i < ile4; i++)
	{
		cout << "Podaj " << (i+1) << " element: " << endl;
		cin >> tab4[i];
		cin.ignore();
	}
	
	
	for (int i = 1; i < ile4; i++)
		if (tab4[i] > tab4[k2])
			k2 = i;
	
	
	cout << "Maksymalna liczba drugim sposobem: " << tab4[k2] << endl;
	cout << "Tablica ta posiada indeks: " << k2 << endl;
	cout << "Zostala ona wpisana jako: " << (k2+1) << endl;	
	

	getchar();
	system("PAUSE");
	return 0;
}
