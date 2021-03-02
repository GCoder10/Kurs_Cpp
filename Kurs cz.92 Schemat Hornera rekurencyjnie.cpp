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
/*
	Globalne definiowanie zmiennych, aby by�o mo�liwe u�ycie ich w zewn�trznych funkcjach/procedurach.
	Gdyby nie to, trzeba by by�o u�ywa� parametr�w przekazywanych do takich funkcji/procedur w 
	postaci referencji b�d� wska�nik�w.
	Globalne zmienne w przeciwie�stwie do lokalnych przyjmuj� automatycznie warto�ci 0 w przypadku
	braku ich definicji.
*/
int Horner(int); // Deklaracja funkcji, zwraca typ int, jeden parametr typu int.

int n;
int * a = new int[n];
int x;


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
	
	cout << "Podaj wartosci a: " << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
		cin.ignore();
	}
	cout << "Podaj x: " << endl;
	cin >> x;
	cin.ignore();
	
	cout << "Wynik to " << Horner(n);
	
	

	getchar();
	system("PAUSE");
	return 0;
}

/*
	Funkcja Horner przyjmuje stopie� - n.
		w[0] = a[0];
		w[1] = a[0] * x + a[1];
		w[2] = a[1] * x + a[2];
	Wz�r og�lny:
		w[n] = a[n-1] * x + a[n]; - wz�r rekurencyjny
		
		
	Przyk�ad:
		(((5 * x + 2) * x + 1) * x + 10) * x + 4
		return Horner(i-1) * x + a[i];
		i = 4;
		n = 4;
		x = 2;
		i =/= 0
		
	dalej:
		
		return Horner(4-1) * x + a[i]
		
	i = 3
	w = 
		return Horner(3-1) * x + a[i]
		
	i = 2
	w = 
		return Horner(2-1) * x + a[i]	
		
	i = 1
	w = 
		return Horner(1-1) * x + a[i]	
		
	i = 0
	i == 0
	return a[0];
	
	w = a[0] = 5;
	a[0] * x  + a[i] = 10 + 2 = 12
	
	i = 1
	return Horner(1-1) * x + a[i]
	
	i = 2
	...
	w = 124
*/
int Horner(int i) // Definicja
{
	if (i == 0)
		return a[0];
	else
		return Horner(i-1) * x + a[i];
}
