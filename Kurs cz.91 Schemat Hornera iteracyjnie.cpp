#include <iostream>

using namespace std;

/*
	5 * x^4 + 2 * x^3 + x^2 + 10x + 4
	
	((5 * x^3 + 2 * x^2 + x) + 10) * x + 4
	
	((5 * x^2 + 2 * x + 1) * x + 10) * x + 4
	
	(((5 * x + 2) * x + 1) * x + 10) * x + 4
	
	// 4 mno�enia 4 dodawania
	
	a normalnie?
	
	(5 * x * x * x * x) + (2 * x * x * x) + (1 * x * x) + 10 * x + 4
	
	// 10 mno�e� 4 dodawania
*/

int main()
{
	/*
		Iteracyjne podej�cie do problemu jest du�o szybsze od rekurencyjnego
		W przypadku rekurencji w przypadku wi�kszych r�wna� mo�e dochodzi� do setek tysi�cy
		odwo�a�, co wp�ynie na znaczne zwolnienie dzia�ania programu oraz zaj�cie pami�ci przez
		program.
		
		Algorytm polega na wyci�ganiu x przed nawias i powtarzamy dzia�anie do momentu otrzymania 
		r�wnania odpowiedniej postaci.
		
		Mniej mno�e� zamiast wi�cej ostatecznie.
	*/	
	int n;
	
	cout << "Podaj stopien wielomianu: " << endl;
	cin >> n;
	cin.ignore(); // Ignorowanie entera w wej�ciowym buforze danych.
	
	/*
		Tablica, dynamiczne alokowanie pami�ci new int, rezerwacja miejsca dla wszystkich element�w tak, 
		aby znajdywa�y si� obok siebie. W przypadku braku mo�liwo�ci znalezienia takiego miejsca new int 
		zwr�ci NULL.
		Nazwa tablicy to te� jest wska�nik jak tutaj, na pierwszy element tablicy (jego adres),
		potem reszta element�w jest obok.
		Alternatywnie mo�na zastosowa� lepsz� wersj� tablicy, czyli vector, kontener z STL
		Standard Template Library.
		W tym przypadku rezerwacja miejsca na elementy mo�e mie� miejsce oddzielnie od reszty, 
		w sensie, wszystkie elementy mog� ale nie musz� znajdowa� si� obok siebie w pami�ci.
		Do odnajdowania element�w s�u�y wtedy iterator.
		Dodatkowo, vector rezerwuje miejsce na zapas, np. 
		przechowuje 4 elementy ale miejsce jest zarezerwowane na 8.
	*/
	int * a = new int[n];
	
	cout << "Podaj wartosci a: " << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
		cin.ignore();
	}
	
	int x;
	cout << "Podaj x: " << endl;
	cin >> x;
	cin.ignore();
	
	
	
	// (((5 * x + 2) * x + 1) * x + 10) * x + 4
	int w;
	w = a[0]; // 5
	
	/*
		Wz�r podajemy od lewej do prawej.
		w = 5
		x = 2
		w = 5 * 2 + a[i] = 10 + 2 = 12
		w = 12
		
		i++
		w = 12 * 2 + a[i] = 24 + 1 = 25
		i++
		w = 25 * 2 + a[i] = 50 + 10 = 60
		i++
		w = 60 * 2 + a[i] = 120 + 4 = 124
		
		Dane wej�ciowe:
		stopie� = 4
		a[0] = 5
		a[1] = 2
		a[2] = 1
		a[3] = 10
		a[4] = 4
		x = 2
	*/
	for (int i = 1; i <= n; i++)
	{
		w = w * x + a[i];
	}
	
	cout << "Wynik to: " << w;
	
	delete [] a; // zwalnianie pami�ci w przypadku new int, new double itp - konieczne.

	getchar();
	system("PAUSE");
	return 0;
}
