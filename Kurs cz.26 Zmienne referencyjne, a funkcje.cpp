#include <iostream>

using namespace std;

void swap           (int, int); // Funkcja nic nie zwraca, czyli procedura
void swapRef        (int &, int &);
int  & swapRefReturn(int &, int &);

int main()
{
	/*
		Wykorzystanie referencji w funkcji podmieniaj�cej warto�ci zmiennych mi�dzy sob�.
	*/
	int a = 10;
	int b = 20;
	int t;
	
	t = a; // t = 10;
	a = b; // a = 20;
	b = t; // b = 10;
	
	// Podmienione warto�ci
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "t: " << t << endl;
	
	
	int c = 40;
	int d = 30;
	t = 0;
	swap(c,d);
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;	
	// Zamiana nast�pi, ale wewn�trz procedury a nie dla c i d.
	
	
	int e = 100;
	int f = 200;
	// Procedura swapRef przyjmuje zmienne referencyjne na e i f, czyli mo�e dokona� zmiany 
	// bezpo�rednio na tych zmiennych, poniewa� poprzez referencje odwo�a si� do ich adres�w
	// w pami�ci.
	swapRef(e,f);
	cout << "e: " << e << endl;
	cout << "f: " << f << endl;		
	
	
	
	// Zwracanie referencji przez procedure:
	// Procedura swapRefReturn(e,f) zwr�ci�a ref. adres do zmiennej e
	// g jako zmienna ref. zacz�a wskazywa� na to, co zwr�ci�a procedura, czyli e
	// g wp�ywa bezpo�rednio na warto�� e.
	int &g = swapRefReturn(e,f); // Zmienna ref. g = przypisany wynik ze swapRefReturn, czyli x
	cout << "g: " << g << endl;
	cout << "e: " << e << endl;
	g = 500;
	cout << "g: " << g << endl;
	cout << "e: " << e << endl;
	
	system("pause");
	return 0;
}

void swap(int x, int y)
{
	int t = x;
	x = y;
	y = t;
}

void swapRef(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}

int & swapRefReturn(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
	return x;	
}
