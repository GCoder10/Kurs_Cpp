#include <iostream>

using namespace std;

int main()
{
	/*
		Sprawdzanie dw�ch liczb, czy dana liczba jest wielokrotno�ci� drugiej.
		Mo�emy otrzyma� poprzez pierwsz� liczb� nast�pn� liczb�, gdy j� pomno�ymy przez liczb� naturaln�.
		np.
		9 = 3 * 3
		Czyli 3 jest wielokrotno�ci� liczby 9.
		27 = 3 * 3 * 3
		3 te� jest wielokrotno�ci� liczby 27.
		
		Do sprawdzania w programie, modulo
		bo np. 9 % 3 == 0.
		
		Czyli, je�eli z dzielenia modulo nie ma reszty, to znaczy, �e liczba jest wielokrotno�ci� liczby
		nast�pnej.
	*/	
	int a, b;
	
	cout << "Podaj 1 i 2 liczbe: " << endl;
	cin >> a >> b;
	cin.ignore();
	
	if(a % b == 0)
		cout << a << " jest wielokrotnoscia liczby " << b << endl;
	else
		cout << a << " nie jest wielokrotnoscia liczby " << b << endl;


	getchar();
	system("PAUSE");
	return 0;
}
