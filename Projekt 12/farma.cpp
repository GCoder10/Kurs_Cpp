#include <iostream>
#include "farma.h"

using namespace std;

/*
	Klasa abstrakcyjna - bardzo wysoko po�o�ona.
*/
void Zwierze::dajGlos()
{
	cout << "[Klasa: Zwierze, metoda/procedura dajGlos] Glos zwierze" << endl;
}

void Mucka::dajGlos()
{
	cout << "[Klasa: Mucka, metoda/procedura dajGlos] Glos mucka" << endl;
}

void Pies::dajGlos()
{
	cout << "[Klasa: Pies, metoda/procedura dajGlos] Glos pies" << endl;
}

void Kogut::dajGlos()
{
	cout << "[Klasa: Kogut, metoda/procedura dajGlos] Glos kogut" << endl;
}
