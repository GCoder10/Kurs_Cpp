#include <iostream>

using namespace std;

// Przeci��enie funkcji: druga funkcja nazwana tak samo
// Polimorfizm - "wielo nazwa taka sama"
int power(int, int); // Funkcja
void power(double, int); // Procedura

main()
{
	int w;
	double x;
	// int w; double x; kompilator rozpozna, kt�ra funkcja/procedura jest do wywo�ania pomimo takich samych nazw, po parametrach, po ich typach
	
	cout << power(2,4) << endl;
	
	cout << "Podaj podstawe: " << endl;
	cin >> x;
	cout << "Podaj wykladnik: " << endl;
	cin >> w;
	// cout << "Wynik potegowania: " << x << "^" << w << " = " << power(x,w) << endl;
	power(x,w);
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// Przyk�ad na rozpoznanie przez kompilator, kt�r� funkcj� / procedur� wywo�a�:
	cout << "Funkcja: " << endl;
	cout << power(4,4) << endl;
	cout << "Procedura: " << endl;
	power(4.0,4);
	
	
	system("pause");
	return 0;
}

/*

   2 ^ 3 = 2 * 2 * 2

*/
int power(int x, int w)
{
	int x0 = x;
	
	// Wyk�adnik wi�kszy od 1 to mno�y liczb� przez sam� siebie
	// POSTdekrementacja = najpierw sprawdzi w > 1, potem pomniejszy w o 1
	while(w-- > 1)
		// x = x * x0;
		x *= x0;
		// w--;
	
	return x;
}

void power (double x, int w)
{
	double x0 = x;
	
	int i = 0;
	while(i++ < w)
	{
		cout << x0 << "^" << i << " = " << x << endl;
		x *= x0;
	}
	
	return;
}

// e + w wyniku oznacza, * 10 ^ 6 (e+006)
