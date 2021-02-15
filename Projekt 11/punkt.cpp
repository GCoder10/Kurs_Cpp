#include <iostream>
#include "punkt.h"

using namespace std;

/*
	U�ywanie operator�w this, �eby ci�gle zwraca�/odwo�ywa� si� do x nale��cych do tej 
	instancji/obiektu + podpowied� dla kompilatora w�a�nie taka.
	Pow�d u�ycia: taka sama nazwa parametru jak zmiennej.
	ale nie ma co tworzy� 100 zmiennych.
*/	
Punkt::Punkt(int x)
{
	cout << "Zostal wywolany konstruktor z klasy bazowej - Punkt " << endl;
	this->x = x;
}

Punkt::~Punkt()
{
	cout << "Zostal wywolany destruktor z klasy bazowej - Punkt " << endl;
}

int Punkt::getX()
{
	return this->x;
}

void Punkt::setX(int x)
{
	this->x = x;
}

Punkt2D::Punkt2D(int x, int y) : Punkt(x) // Punkt(x) wywo�anie konstruktora w klasie bazowej.
{
	cout << "Zostal wywolany konstruktor z klasy pochodnej - Punkt2D " << endl;
	this->y = y;
}

Punkt2D::~Punkt2D()
{
	cout << "Zostal wywolany destruktor z klasy pochodnej - Punkt2D " << endl;
}
