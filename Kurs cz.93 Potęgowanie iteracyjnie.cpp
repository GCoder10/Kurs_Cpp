#include <iostream>

using namespace std;

int Potega(int, int); // Funkcja zwracaj�ca warto�� typu int, przyjmuje dwa parametry. Deklaracja

int a, w;

int main()
{
	/*
	int a, w;
		Globalne zmienne, automatycznie przyjmuj� warto�ci zerowe w przypadku braku 
		podania ich definicji w przeciwie�stwie do zmiennych lokalnych, kt�re mog�
		w przypadku nie podania startowej warto�ci przyjmowa� losowe elementy (warto�ci)
		z pami�ci, cho�by nawet z innego programu.
	
		
		Pot�gowanie = mno�enie siebie przez siebie;
		a^3 = a * a * a
	*/	
	cout << "Podaj podstawe potegi: ";
	cin >> a;
	cin.ignore();
	
	cout << "Podaj wykladnik: ";
	cin >> w;
	cin.ignore();
	
	cout << a << "^" << w << " = " << Potega(a,w) << endl;
	
	getchar();
	system("PAUSE");
	return 0;
}

/*
	Dzia�anie:
	
		a = 5
		w = 2
		
		wynik = 1
		i = 0
			wynik = 1 * 5
		i = 1
			wynik = 5 * 5 = 25
			
	return wynik, czyli return 25
*/
int Potega(int a, int w) // Definicja
{
	int wynik = 1;
	for (int i = 0; i < w; i++)
	{
		wynik *= a; // wynik = wynik * a
	}
	return wynik;
}
