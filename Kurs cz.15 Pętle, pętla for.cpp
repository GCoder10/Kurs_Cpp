#include <iostream>

using namespace std;

main()
{
	/*
	Inicjalizacja zmiennej, czyli z jednoczesnym przypisaniem warto�ci
	int a = 5;
	
	
	
	int b;
	b = 5;
	
	         Zmienne steruj�ce
	         Zmienne licznikowe
		for (int i = 0;  i < 10; i++)
	
	
		for (inicjalizacja zmiennych; warunek p�tli (mo�e by� skomplikowany z && lub || itd); instrukcje do wykonania po przej�ciu jednej p�tli, mo�e te� by� i += 5 itp)
	
		Zmienna i w takim wypadku istnieje tylko dla jednej p�tli, wi�c mo�na tylko takiej zmiennej u�ywa� dalej w kolejnych p�tlach.
	*/
	
	for (int i = 0;  i < 3; i++)
		cout << "i jest rowne: " << i << "\n";
		cout << "To sie wykona raz"<< "\n";
	

	for (int i = 0;  i < 3; i++)
	{
		cout << "i jest rowne: " << i << "\n";
		cout << "To sie wykona 3 razy"<< "\n";	
	}
	
	
	// Zerowanie tablicy:
	int tab[100];
	
	
	for (int i = 0; i < 100; i++)
		tab[i] = i;
	
			
	for (int i = 0; i < 100; i++)
	{
		cout << "tab[" << i << "] = " << tab[i] <<"\n";
		cout << "Adres tablicy tab[" << i << "] = " << &tab[i] << endl;
	}
	
	
	
	
	system("pause");
}
