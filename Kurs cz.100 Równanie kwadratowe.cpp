#include <iostream>
#include <cmath> // Dla funkcji sqrt

using namespace std;

int main()
{
	/*
		R�wnanie kwadratowe:
			a*x^2 + b*x + c = 0
			
		Zak�adamy, �e r�wnanie jest zupe�ne.
			Czyli, �e u�ytkownik b�dzie podawa� wszystkie argumenty.
		
		
		
		delta = b ^ 2 - 4 * a * c
		
		delta > 0 => dwa rozwi�zania.
			x1 = (-b - sqrt(delta))/2 * a
			x2 = (-b + sqrt(delta))/2 * a
		
		
		delta == 0
			x1 = (-b)/2 * a
			x2 = (-b)/2 * a		
			Dwa takie same rozwi�zania, dlatego si� m�wi, �e jedno rozwi�zanie.	
			
			
		delta < 0
			Brak rozwi�zania.
	*/
	double a, b, c, delta, x1, x2;
	
	cout << "Podaj parametry w kolejnosci a, b, c" << endl;
	cin >> a >> b >> c;
	cin.ignore();
	
	delta = (b * b - 4 * a * c);
	if (delta > 0)
	{
		cout << "Rownanie posiada dwa rozwiazania: " << endl;
		x1 = (-b - sqrt(delta))/2 * a;
		x2 = (-b + sqrt(delta))/2 * a;
		
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	} else if (delta == 0)
	{
		cout << "Rownanie posiada jedno rozwiazanie: " << endl;
		x1 = (-b)/2 * a;
		
		cout << "x = " << x1 << endl;
	} else if (delta < 0)
	{
		cout << "Brak rozwiazan" << endl;
	} else
	{
		cout << "Cos poszlo nie tak" << endl;
	}
		


	getchar();
	system("PAUSE");
	return 0;
}
