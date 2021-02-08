#include <iostream>

using namespace std;

void przemnozZm(int &zm, int ile);// Procedura przyjmuje referencje do a
// �eby mo�na by�o wp�ywa� na warto�� zmiennej poza funkcj�/procedur�, potrzebujemy jej adresu.
void przemnozZm(int *zm, int ile);// Procedura przyjmuje wska�nik do a
// Kompilator umie rozr�ni�, o kt�r� procedur� chodzi z uwagi na r�nic� w przekazywanych parametrach.
int * przemnozZmInt(int *zm, int ile); // Funkcja
void przemnozTab(int *p, int ile, int rozmiar);
int obliczRozmiarTabChar(char *character);

int main()
{
	int a = 10;
	cout << a << endl;
	
	cout << "polimorfizm, z referencja: " << endl;
	przemnozZm(a, 5);
	cout << a << endl;
	cout << "polimorfizm, ze wskaznikiem: " << endl;
	przemnozZm(&a, 5);
	cout << a << endl;
	
	int * b = przemnozZmInt(&a, 5);
	cout << "z funkcja return int: " << endl;
	cout << *b << endl;
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// Przekazywanie tablicy do funkcji/procedury.
	// Czyli przekazujemy wska�nik (nazwa tablicy - wska�nik na 1-wszy element tablicy).
	int tab[10];
	for (int i = 0; i < 10; i++)
	{
		tab[i] = i;
		cout << "tab [" << i << "] = " << tab[i] << endl;
	}
	// Sprawdzanie rozmiaru tablicy sizeof
	cout << "Wielkosc zmiennej typu int (4 bajty): "     << sizeof(int)    << endl;
	cout << "Wielkosc zmiennej typu double (8 bajtow): " << sizeof(double) << endl;
	cout << "Wielkosc zmiennej typu float (4 bajty): "   << sizeof(float)  << endl;
	cout << "Wielkosc zmiennej typu char (1 bajt): "     << sizeof(char)   << endl;
	cout << "Wielkosc zmiennej typu string (8 bajtow): " << sizeof(string) << endl;
	cout << "Wielkosc zmiennej wsk. b (8 bajtow): "      << sizeof(b)      << endl;
	cout << "Wielkosc tablicy tab[10] (40 bajtow): "     << sizeof(tab)    << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	int tab2[20];
	// sizeof(tab2)/sizeof(int) = uzyskanie ilo�ci element�w tablicy
	for (int i = 0; i < sizeof(tab2)/sizeof(int); i++)
	{
		tab2[i] = i;
		cout << "tab2 [" << i << "] = " << tab2[i] << endl;
	}
	przemnozTab(&tab[0], 5, sizeof(tab)/sizeof(int));
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Tablica tab po przemnozeniu przez 5 (przemnozTab(&tab[0], 5, sizeof(tab)/sizeof(int));): " << endl;
	for (int i = 0; i < sizeof(tab)/sizeof(int); i++)
	{
		cout << "tab [" << i << "] = " << tab[i] << endl;
	}
	// &tab[0] == tab - wskazuj� na 1-wszy element tablicy tab (jego adres) w tym szeregu og�em.
	przemnozTab(tab, 2, sizeof(tab)/sizeof(int));
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Tablica tab po przemnozeniu przez 2 (przemnozTab(tab, 2, sizeof(tab)/sizeof(int));): " << endl;
	for (int i = 0; i < sizeof(tab)/sizeof(int); i++)
	{
		cout << "tab [" << i << "] = " << tab[i] << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	
	// Do tablicy znakowej nie potrzebujemy podawania od razu jej rozmiaru.
	char tabChar[20] = "qwertyuiop[]asdfghj";
	int rozmiarChar = obliczRozmiarTabChar(tabChar);
	cout << "Rozmiar tabChar[20] = " << rozmiarChar << endl;





	system("pause");
	return 0;
}

void przemnozZm(int &zm, int ile)
{
	zm *= ile;
}

void przemnozZm(int *zm, int ile)
{
	// *zm = *zm * ile;
	*zm *= ile;
}

int * przemnozZmInt(int *zm, int ile)
{
	*zm *= ile;
	
	return zm;
}

void przemnozTab(int *p, int ile, int rozmiar)
{
	// int *p = tab; int *p = &tab[0];
	// rozmiar np. 10
	// p�tla while czyta rozmiar, potem wykonuje instrukcje i nast�pnie POSTdekrementacja o 1
	// i tak przez ca�� tablic� do 0, bo 0 = fa�sz = koniec p�tli while
	
	while(rozmiar--)
		p[rozmiar] *= ile;
}

int obliczRozmiarTabChar(char *character)
{
	// Funkcja dostaje wska�nik do pocz�tku szeregu tabChar i liczy d�ugo�� ci�gu znak�w.
	// Zwraca int, jaka jest d�ugo��.
	// \0 = 0 czyli false, koniec pracy while
	
	
	// char * character = &tabChar[0]; char * character = tabChar;
	int dl = 0;
	while(character[dl++]);
		
	return dl;
	// return strlen(character); zwr�ci nam niefaktyczn� ilo�� znak�w ( - 1 )
}
