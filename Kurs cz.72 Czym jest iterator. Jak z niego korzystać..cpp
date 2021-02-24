#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		ITERATOR - obiekt wskazuj�cy KONKRETN� pozycj� w KONTENERZE
		
		Tworzenie iteratora:
		typ_kontenera::iterator nazwa_iteratora
		
		:: Operator zasi�gu, np. do zasi�gni�cia konkretnej metody w innej klasie itd.
		
		
		Iteracja - ka�de z przej�� w p�tli.
		W takiej p�tli iteratorem nazywamy zmienn� i.
		Iterator przechowuje pozycje przej�cia p�tli.
		
		
		
		W przypadku STL to nie jest ju� zwyk�a zmienna, to jest obiekt.
		Obiekt wskazuj�cy na konkretn� pozycj� w kontenerze element�w.
		Nie wszystkie dane w takim kontenerze musz� znajdowa� si� jedna po drugiej w pami�ci.
		Dane zwyk�ej tablicy (lub przy pomocy np. new int - dynamiczne alokowanie pami�ci dla tablicy)
		s� pouk�adane jedna po drugiej w pami�ci. Dlatego wska�nikami mogli�my skaka� po danych w tablicy.
		
		W przypadku kontener�w mo�e tak by�, ale nie musi.
		Iterator jest obiektem.
	*/
	
	vector<int> wholeNumbers {20, 10, 4, -3, 25};
	
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Iteracja: " << (i+1) << endl;
	}
	
	vector<int>::iterator it = wholeNumbers.begin(); // Wskazywanie na 20
	cout << "Iterator, 20: " << endl;
	cout << *it << endl; // pomimo u�ycia * to nie jest wska�nik.
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	it++;
	cout << "Iterator, 10: " << endl;
	cout << *it << endl;
	it+=2;
	cout << "Iterator, -3: " << endl;
	cout << *it << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	it--;
	cout << "Iterator, 4: " << endl;
	cout << *it << endl;	
			

	system("PAUSE");
	return 0;
}
