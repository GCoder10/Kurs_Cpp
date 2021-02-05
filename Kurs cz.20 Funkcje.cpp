#include <iostream>

using namespace std;

//typ_zwracanej_warto�ci nazwa_funkcji(okre�lenie_parametr�w_funkcji TYP nazwa_zm, TYP nazwa_zm2, ...); {}

// Przyk�ad funkcji, z ma�ej litery
void powitanie(); // Deklaracja funkcji, nic nie zwraca, czyli procedura
double dodawanie(double l1, double l2); // Funkcja przyjmuje 2 argumenty typu double do dodania, zwraca typ double
double dodawanie2(double, double); // Funkcja bez nazw dla parametr�w


// Funkcja inline, wywo�uj� si� szybciej
// Dla lepszej czytelno�ci powinno si� pisa� funkcji ni�ej
double dodawanie_inline(double l1, double l2) { return l1 + l2; }



// void system(string);
// Funkcja g��wna, zawsze pierwsza, wywo�uje inne funkcje, instrukcje itd.
main()
{
	// return 0, fa�sz, zako�czenie pracy funkcji
	char znak;
	cout << "Czy zakonczyc prace programu? (T/N) " << endl;
	cin >> znak;
	
	if (znak == 't')
		return 0;
	
	
	
	powitanie(); // Wywo�anie funkcji
	cout << "Wartosc dodawanie(): " << dodawanie(2.4, 4) << endl;
	cout << "Wartosc dodawanie2(): " << dodawanie2(4.4, 4) << endl;
	cout << "Wartosc dodawanie_inline(): " << dodawanie_inline(10.4, 4) << endl;
	
	double a = 2, b = 4;
	cout << "Wynik dodawania liczb a i b: " << dodawanie(a,b) << endl;
	
	// Funkcja predefiniowana
	system("pause");
}

void powitanie() // Definicja funkcji
{
	cout << "Czesc kolego" << endl;
}

// l1 i l2 - zmienne parametrowe, lokalne.
double dodawanie(double l1, double l2)
{
	// l1 = a
	// l1 = 10;
	cout << "Tekst z funkcji dodawanie()" << endl;
	// double wynik = l1 + l2;
	return l1 + l2;
}

double dodawanie2(double l1,double l2)
{
	return l1 + l2;
}
