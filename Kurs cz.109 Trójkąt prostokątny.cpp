#include <iostream>

using namespace std;

int main()
{
	/*
		Algorytm sprawdzaj�cy, czy dany tr�jk�t jest tr�jk�tem prostok�tnym.
		Kwadrat przeciwprostok�tnej musi by� r�wny sumie kwadrat�w bok�w przyprostok�tnych.
	*/
	int a, b, c;
	
	
	cout << "Zal. c > a && c > b, zabezpieczenie w postaci zapisu po || w if." << endl;
	cout << "Podaj dlugosci bokow do sprawdzenia, czy trojkat jest prostokatny: " << endl;
	cin >> a >> b >> c;
	cin.ignore();
	
	
	// Warunek na powstanie tr�jk�ta.
	if ((a < b + c) && (b < a + c) && (c < b + a))
	{
		if ((a * a + b * b) == (c * c) || (c * c + b * b) == (a * a) || (a * a + c * c) == (b * b))
			cout << "Trojkat jest prostokatny." << endl;
		else
			cout << "Trojkat nie jest prostokatny." << endl;
	} 
	else 
		cout << "To nie jest trojkat." << endl;
	
	
	getchar();
	system("PAUSE");
	return 0;
}
