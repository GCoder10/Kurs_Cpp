/*

tekst	A	B	C	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z

szyfr	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z	A	B	C

*/
#include <iostream>
#include <string>

using namespace std;

string Zaszyfrowanie(string); // Deklaracja funkcji zwracaj�cej string, przyjmuje 1 parametr typu string
string Odszyfrowanie(string);
const int ile = 3; // Przesuwanie o 3 pozycje w alfabecie.

int main()
{
	/*
		Szyfr Cezara s�u�y do szyfrowania danych, aby nikt inny nie m�g� ich odczyta�
		
		Ka�da literka z tekstu zamienia si� na literk� o 3 pozycje dalej w alfabecie.
		
		Jest to jeden z najprostszych sposob�w na napisanie szyfru Cezara.
		
		Do przeskakiwania mi�dzy literami w alfabecie wykorzystano tablice kod�w ASCII
		A = 65
		...
		Z = 90
		
		Przy XYZ trzeba ustawi� od pocz�tku, ABC, od 65.
		
		W kodach ASCII polskich znak�w akurat nie ma.
	*/
	string slowo;
	cout << "Podaj slowo do zaszyfrowania: " << endl;
	cin >> slowo;
	cin.ignore();

	cout << "Zaszyfrowane dane: " << Zaszyfrowanie(slowo) << endl;
	
	cout << "Odszyfrowane dane to: " << Odszyfrowanie(Zaszyfrowanie(slowo)) << endl;

	getchar();
	system("PAUSE");
	return 0;
}

string Zaszyfrowanie(string slowo) // Definicja funkcji
{
	int t;
	
	for (int i = 0; i < slowo.length(); i++)
	{
		t = slowo[i] + ile;
		
		if (t < 65) // mniejsze od A w ASCII
			slowo[i] += (26 + ile);
		else if (t > 90) // wi�ksze od Z w ASCII
			slowo[i] -= (26 - ile); // slowo[i] = slowo[i] - (26 - ile) = slowo[i] - 26 + ile
		else
			slowo[i] += ile;
	}
	
	return slowo;
}

string Odszyfrowanie(string slowo)
{
	int t;
	
	for (int i = 0; i < slowo.length(); i++)
	{
		t = slowo[i] - ile;
		
		if (t < 65)
			slowo[i] += (26 - ile);
		else if (t > 90) 
			slowo[i] -= (26 + ile);
		else
			slowo[i] -= ile;
	}

	return slowo;
}
