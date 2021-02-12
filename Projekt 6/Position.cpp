// Definicje
#include <iostream>
#include "position.h"

using namespace std;

Position::Position(int x, int y)
{
	// do x - kompilator u�ywa wska�nik this, na dany obiekt u�ywany, 
	// wska�nik wskazuj�cy na x b�d�cy cz�ci� tej instancji, tego obiektu.
	// Wy�uskanie warto�ci b�d�cej pod adresem x, zastosowanie this podpowiada dla kompilatora, �e
	// chodzi o odwo�anie si� do x b�d�cego cz�ci� akurat tej instancji, tego obiektu.
	// Upraszcza robot�, nie trzeba wymy�la� du�o zmiennych.
	(*this).x = x;
	(*this).y = y;
	/*
	Mo�na te� tak:
		this->x = x;
		this->y = y;
	*/
}

Position::~Position()
{
	
}

void Position::getPosition() const
{
	cout << "x: " << (*this).x << endl;
	cout << "y: " << y << endl;
}

void Position::setPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}
