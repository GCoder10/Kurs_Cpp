#include <iostream>

using namespace std;

int NWD(int, int); // Deklaracja funkcji, zwraca typ int. Dwa parametry.

int main()
{
	/*
		Znajdowanie najwi�kszego wsp�lnego dzielnika
		NWD - liczba naturalna, kt�ra dzieli obie liczby w spos�b taki, �e nie ma reszty.
		
		a = 20
		b = 10
		
		r = a modulo b = 20 modulo 10 = 0
		Bo nie ma reszty z dzielenia
		P�tla nieprawdziwa (bo 0)
		return b, czyli return 10
		
		LUB
		a = 10
		b = 20
		r = a modulo b = 10 modulo 20
		reszta z dzielenia = 10
		prawda
		wykonywanie p�tli while
		Jakakolwiek liczba inna ni� 0 daje prawd�
		a = 20
		b = 10
		spr. r = 20 modulo 10, daje 0
		return b, czyli return 10
	*/	
	int a, b;
	
	cout << "Podaj dwie liczby, z ktorych mam znalesc NWD: " << endl;
	cin >> a >> b;
	cin.ignore();
	
	cout << NWD(a,b) << endl;

	getchar();
	system("PAUSE");
	return 0;
}

int NWD(int a, int b) // Definicja funkcji zwracaj�cej a typu int
{
	int r;
	
	while(r = a % b)
	{
		a = b;
		b = r;
	}
	
	return b;
}
