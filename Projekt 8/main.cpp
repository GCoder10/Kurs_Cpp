#include <iostream>
#include "test.h"

using namespace std;

int main(int argc, char** argv) 
{
	/*
		Tak samo jak klasa okre�la, kt�re zewn�trzne funkcje / procedury s� jej przyjacielami i daje dost�p
		do swoich zmiennych prywatnych tak samo dana klasa mo�e powiedzie�, kt�ra inna zewn�trzna
		klasa jest jej przyjacielem.
	*/
	
	A objA;
	B objB;
	// Klasa A mo�e zmienia� warto�� prywatn� w klasie B, na 50, bo jest jej przyjacielem.
	// Ale Klasa A nie uwa�a klasy B za przyjaciela, czyli z poziomu klasy B nic nie zmienimy w warto�ciach
	// zmiennych prywatnych klasy A.
	// Potem zmienione na to, �e klasa A uwa�a ju� klas� B za przyjaciela.
	
	objA.ustawTajne(objB, 50);
	
	cout << objB.pobierzTajne() << endl;
	
	objB.ustawTajniejsze(objA, 120);
	
	cout << objA.pobierzTajniejsze() << endl;
	
	system("PAUSE");
	return 0;
}
