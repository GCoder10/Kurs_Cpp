#include <iostream>
#include <cmath> // abs - absolute

using namespace std;

int main()
{
	/*
		-4 -> 4
		20 -> 20
		0 -> 0
		
		Jedynie musimy co� zrobi�, gdy podana liczba jest liczb� ujemn�.
	*/

	int x;
	
	cout << "Podaj liczbe: " << endl;
	cin >> x;
	cout << "Wartosc bezwzgledna to (abs): " << abs(x) << endl;
	
	if (x < 0)
		x *= -1;
		
		
	cout << "Wartosc bezwzgledna to: " << x << endl;

	getchar();
	system("PAUSE");
	return 0;
}
