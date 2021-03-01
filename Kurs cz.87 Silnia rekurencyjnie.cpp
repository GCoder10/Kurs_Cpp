#include <iostream>

using namespace std;

unsigned int silnia(int); // Deklaracja funkcji zwracaj�cej tylko warto�ci dodatnie (unsigned). Przyjmuje jeden parametr.

int main()
{
	/*
		Silnia - iloczyn wszystkich liczb naturalnych nie wi�kszych od n, kt�re podajemy.
		Np.
		5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1 = 120
		
		Rekurencja - ci�g�e wywo�ywanie funkcji w niej samej.
		
		Funkcja silnia:
			Je�eli n = 0 lub 1, czyli silnia = 1, czyli return 1.
			== por�wnanie ale === por�wnanie ze sprawdzeniem, czy por�wnywane warto�ci s�
			tego samego typu.
			
			Rekurencja:
				return n * silnia(n - 1);
				Np. dla 5
				return 5 * silnia(4)
				potem b�dzie
				return 4 * silnia(3)
				...
	*/	
	int ile;
	
	cout << "Z ilu chcesz obliczyc silnie? ";
	cin >> ile;
	cin.ignore();
	cout << endl;
	
	
	cout << "Silnia z " << ile << " wynosi: " << silnia(ile) << endl;

	getchar();
	system("PAUSE");
	return 0;
}

unsigned int silnia(int n) // Definicja
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * silnia(n - 1);
}
