#include <iostream>

using namespace std;


int main()
{
	/*
		W jaki spos�b wska�niki powi�zane s� z tablicami?
		- Nazwa tablicy jest wska�nikiem
	*/
	// 12 bajt�w pami�ci
	// 3 * 4 bajty na ka�dy int
	int a[3];
	a[0] = 0;
	a[1] = 20;
	a[2] = 40;
	// 2 bajty
	short int zm;
	int * const wsk = &a[0];
	// double zajmuje 8 bajt�w.
	// float zajmuje 4 bajty.
	
	
	cout << "Adres jako a tablica: " << endl;
	cout << a << endl;
	cout << "a[0] = " << &a[0] << endl;
	cout << "a[1] = " << &a[1] << endl;
	cout << "a[2] = " << &a[2] << endl;
	cout << "*wsk na element a[0]: " << wsk << endl;
	// Adres 1-wszego elementu tablicy jest taki sam jak tablicy.
	// Czyli a jest wska�nikiem, poniewa� jako warto�� przechowuje adres w pami�ci do tablicy.
	// do 1-wszego elementu, czyli do pocz�tku tablicy
	// Dodatkowo a jest wska�nikiem const.
	// Nie mo�emy zmieni� przypisanego adresu jako warto�� a
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Adres tablicy, samo a, taki sam, jak 1-wszego elementu tablicy a: "   << a     << endl;
	cout << "2-gi element tablicy a. Po wskaznikach mozemy sie przesuwac, a + 1: " << a + 1 << endl;
	cout << "3-ci element tablicy a. Po wskaznikach mozemy sie przesuwac, a + 2: " << a + 2 << endl;
	cout << "Mozemy wyjsc poza zakres tablicy: " << a + 3 << endl;
	// Pokazujemy adresy nast�pnych zmiennych jak wyjdziemy poza zakres tablicy.
	// Mo�e by� to zmienna z naszego programu albo z innego.
	// Podczas pr�by zmiany takiego adresu zmiennej z innego programu system operacyjny
	// reaguje i wy��cza program.
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Takie same adresy jak wyzej. Wyluskiwanie wartosci z adresow: "       << *a       << endl;
	cout << "2-gi element tablicy a. Po wskaznikach mozemy sie przesuwac, a + 1: " << *(a + 1) << endl;
	cout << "3-ci element tablicy a. Po wskaznikach mozemy sie przesuwac, a + 2: " << *(a + 2) << endl;
	cout << "Mozemy wyjsc poza zakres tablicy: " << *(a + 3) << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// Wska�niki przypomnienie:
	// a = przechowywany adres przez a.
	// &a = adres wska�nika a.
	// *a = wy�uskana warto�� kryj�ca si� pod adresem przechowywanym przez a.
	// Tablica - wska�nik a - sta�y - nie mo�na modyfikowa� jego adresu, kt�ry przechowuje.
	// a ++ = b��d.
	cout << "Wartosci w tablicy a, 2 zapisy na odczyt: " << endl;
	cout << "a[0] = " << a[0] << endl;
	cout << "a[1] = " << a[1] << endl;
	cout << "a[2] = " << a[2] << endl;
	cout << "To samo co: " << endl;
	cout << "*a = " << *a << endl;
	cout << "*(a + 1) = " << *(a + 1) << endl;
	cout << "*(a + 2) = " << *(a + 2) << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	
	// a ju� wskazuje na 1-wszy element, teraz dodatkowo jest p.
	int * p = &a[0]; // to samo co int * p = a;
	cout << "*p=0: "     << *p   << endl;
	cout << "++*p=1: "   << ++*p << endl;
	cout << "*++p=20: "  << *++p << endl;
	cout << "*p++=20: "  << *p++ << endl;
	cout << "*p=40: "    << *p   << endl;
	/*
	PREinkrementacja
		++*p
			Inkrementuje zawarto�� pod p, pod adresem przechowywanym jako p
		*++p
			Pobranie zawarto�ci kryj�cej si� pod przechowywanym adresem p+1
	POSTinkrementacja
		*p++
			Pobranie zawarto�ci kryj�cej si� pod przechowywanym adresem p+1
		*p ponownie
			po dw�ch inkrementacjach wskazuje ju� 40, 3-ci element tablicy a
	*/
	
	/*
		Wska�niki "wiedz�" na jaki typ danych wskazuj�, dzieki czemu, je�eli 
		inkrementujemy wska�nik typu int, b�dzie on przesuwa� si� od razu o ca�e
		4 bajty, je�eli short int to o 2 bajty, je�eli double to o 8 bajt�w.
	*/
	
	
	system("pause");
	return 0;
}
