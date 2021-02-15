#include "Kopiarka.h"


Kopiarka::Kopiarka(int x, int y)
{
	this->x = x; 
	this->y = y; 
}

Kopiarka::Kopiarka(int x, int y, int wart)
{
	/*
		Zmienne w klasie i u�ywane z zewn�trz nazywaj� si� tak samo, wi�c trzeba
		podpowiedzie� kompilatorowi, o jakie x i y chodzi
		this-> wska�nik na konkretne miejsce w pami�ci przechowuj�ce warto�ci x i y nale��ce
		do klasy akurat tej instancji.
		this-> dzia�a z jednoczesnym wy�uskaniem warto�ci.
	*/
	/*
		Warto�� wart z zewn�trz staje si� rozmiarem dynamicznie przydzielanego miejsca (tablicy)
		w pami�ci new int(wart). wsk w klasie Kopiarka b�dzie wskazywa� na to miejsce.
		Warto�ci� przechowywan� przez wska�nik jest adres przechowywanego miejsca.
		delete wsk - zwolnienie tej pami�ci.
	*/
	this->x = x; 
	this->y = y;
	this->wsk = new int(wart); 
}

// Kopiowanie obj, instancji klasy Kopiarka (typu), wtedy wska�nik na adres zostaje te� skopiowany do
// nowego adresu (jego warto��), wi�c new int i przekazanie wy�uskanej warto�ci z kopiowanego obiektu.
// Kopia wskazuje na zupe�nie inny adres w pami�ci ju�.
// ale warto�� zachowana.
Kopiarka::Kopiarka(const Kopiarka & obj)
{
	this->wsk = new int(*(obj.wsk));
	this->x = obj.x;
	this->y = obj.y;
}

Kopiarka::~Kopiarka()
{
	delete wsk;
}
