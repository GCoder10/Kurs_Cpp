#include <iostream>

using namespace std;

int nazwa_funkcji();
double * nazwa_funkcji_zwr_wskaznik(int, double *);
int ** nazwa_funkcji_zwr_wskaznik_na_wskaznik();
int & nazwa_funkcji_zwr_referencje();
int funkcja(double * (*wsk_na_funkcje_zwr_wskaznik) (int, double *))
{
	double *wsk;
	int a = 25;
	*wsk_na_funkcje_zwr_wskaznik(a, wsk);
}

int main()
{
	int a;
	/*
		Zmienna przechowuj�ca adres funkji.
		
	*/
	
	int (*wsk_na_funkcje) ();
	// wsk_na_funkcje = &a; b��d. Wska�nik ju� nie mo�e wskazywa� na zwyk�� zmienn�
	wsk_na_funkcje = &nazwa_funkcji;
	
	
	
	double * (*wsk_na_funkcje_zwr_wskaznik) (int, double *);
	wsk_na_funkcje_zwr_wskaznik = &nazwa_funkcji_zwr_wskaznik;
	
	
	int ** (*wsk_na_funkcje_zwr_wskaznik_na_wskaznik) ();
	wsk_na_funkcje_zwr_wskaznik_na_wskaznik = &nazwa_funkcji_zwr_wskaznik_na_wskaznik;
	
	
	int & (*wsk_na_funkcje_zwr_referencje) ();
	wsk_na_funkcje_zwr_referencje = &nazwa_funkcji_zwr_referencje;	
	
	
	double *wsk = NULL;
	// Funkcja zwracaj�ca double wska�nik jako parametr dla
	// funkcji przyjmuj�cej wska�nik typu double.
	// Przekazujemy wska�nik wskazuj�cy na odpowiedni� funkcj�, czyli tak�,
	// kt�ra zwraca wska�nik typu double.
	// Wywo�anie cout w funkcji, na kt�r� wskazuje przekazywany wska�nik.
	funkcja(wsk_na_funkcje_zwr_wskaznik);
	
	
	
	
	

	system("pause");
	return 0;
}

int nazwa_funkcji()
{
	
}

double * nazwa_funkcji_zwr_wskaznik(int a, double  * b)
{
	cout << "Wypisanie w double * nazwa_funkcji_zwr_wskaznik(int a, double  * b)" << endl;
	cout << "a: " << a << endl;
	return b;
}

int ** nazwa_funkcji_zwr_wskaznik_na_wskaznik()
{
	
}

int & nazwa_funkcji_zwr_referencje()
{

}
