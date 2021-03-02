#include <iostream>

using namespace std;
// wart. 0, 1, 2, 3, 4, 5, 6, 7,  8,  9,  10,  11,  12,  13,  14,  15,  16,  ...
// wynik 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,  89,  144, 233, 377, 610, 987, ...

int fib(int); // Funkcja, deklaracja, jeden parametr.

int main()
{
	/*
		Fibonacci:
		Ka�da liczba, opr�cz 0 i 1, jest sum� poprzednich dw�ch
		Np. 2 = 1+1, 5 = 3+2, 8 = 5 + 3, itd.
		
		
		Rekurencyjnie - wywo�ywanie funkcji w niej samej.
		
		Dzia�anie:
		n = 8
		n =/= 0 i n =/= 1
		return fib(7)+fib(6)
		
		fib(7)
		return fib(6) + fib(5)
		fib(6)
		return fib(5) + fib(4)
		
		Po wpisaniu n = 40, komputer troch� mo�e to liczy�, tym bardziej po wpisaniu n = 100,
		tak du�o jest kombinacji w rekurencyjnym podej�ciu do tego problemu.
		Rekurencja jest dosy� wolna, zajmuje pami��.
		Setki tysi�cy kombinacji, niekt�re kroki s� powtarzane podw�jnie.
	*/	
	int n;
	
	cout << "Podaj wartosc do ciagu Fibonacciego: ";
	cin >> n;
	cin.ignore(); // Ignorowanie entera we wprowadzanym buforze danych.
	cout << endl;
	
	cout << "Fib (" << n << ") = " << fib(n) << endl;

	getchar();
	system("PAUSE");
	return 0;
}

int fib(int n) // Definicja funkcji zwracaj�cej warto�� typu int.
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n > 1)
		return fib(n-1) + fib(n - 2);
}
