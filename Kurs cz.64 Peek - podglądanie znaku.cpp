#include <iostream>

using namespace std;

int main()
{
	/*
		peek - zerka�
		Zerkamy na znaki w pliku lub jeden znak, po czym odk�adamy plik, 
		jakby nic si� nie sta�o.
		
		
		Np. do analizy, czy to znak, integer itp i zareagowa� na to dalej.
		
		
		Tak samo w pliku, zerkanie na znaki bez wyci�gania ich, 
		reagowanie w zale�no�ci, jakie znaki si� znajduj� / liczby.
	*/
	char c;
	
	c = cin.peek(); // Nie pobieramy znaku, tylko zerkamy.
	
	if (c > '0' && c < '9')
	{
		int liczba;
		cin >> liczba;
		
		cout << "Zostala wpisana liczba: " << liczba << endl;
	}
	else
	{
		string txt;
		
		cin >> txt;
		
		cout << "Wpisano tekst o wartosci: " << txt << endl;
	}
	

	system("PAUSE");
	return 0;
}
