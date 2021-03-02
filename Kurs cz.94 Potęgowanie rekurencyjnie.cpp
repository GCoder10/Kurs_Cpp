#include <iostream>

using namespace std;

int Potega(int); // Funkcja zwracaj�ca warto�� typu int, przyjmuje dwa parametry. Deklaracja

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
		
		Podej�cie rekurencyjne do algorytmu jest du�o gorsze z uwagi na znacznie wi�ksze
		zu�ycie pami�ci, przez co wyniki nie b�d� tak sprawnie uzyskiwane jak w przypadku 
		podej�cia iteracyjnego do algorytmu.
		Spowodowane to jest faktem samej konstrucji rekurencji, odwo�ywanie si� funkcji do
		samej siebie, czyli nawet setki tysi�cy zapyta� w przypadku wi�kszych oblicze�.
	*/	
	cout << "Podaj podstawe potegi: ";
	cin >> a;
	cin.ignore();
	
	cout << "Podaj wykladnik: ";
	cin >> w;
	cin.ignore();
	
	cout << a << "^" << w << " = " << Potega(w) << endl;
	
	getchar();
	system("PAUSE");
	return 0;
}

/*
	Dzia�anie:
		Wyj�tki:
			a^0 = 1
			a^1 = a 
			
			a^2 = a * a
			a^3 = a * a * a
		Wyprowadzenie:
			a^n = a * a * ... * a(n-1)
		
		a(n-1) - wywo�anie rekurencyjnie	
*/
int Potega(int n) // Definicja
{
	if (n == 0)
		return 1;
	else
		return a * Potega(n-1);
}
