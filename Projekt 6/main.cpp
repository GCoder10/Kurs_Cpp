#include <iostream>
#include "position.h"

using namespace std;

int main(int argc, char** argv) 
{
	cout << "pozycje 40, 50: " << endl;
	Position pies(40, 50); // Obiekt, instancja klasy.
	pies.getPosition();
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	cout << "pozycje 140, 15035: " << endl;
	pies.setPosition(140, 15035);
	pies.getPosition();
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "dom pozycje 150, 250: " << endl;
	Position dom(150, 250);// 2-gi Obiekt, 2-ga instancja klasy.
	dom.getPosition();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "dom pozycje 290, 12300: " << endl;
	dom.setPosition(290, 12300);
	dom.getPosition();	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	
	const Position blok(78, 99); // Wszystko co si� dzieje w klasie Position jest niedost�pne.
	cout << "blok pozycje 78, 99: " << endl;
	//blok.setPosition(290, 12300); // b��d, nie mo�na ju� nic zrobi�, wszystko w instancji, obiekcie blok klasy Position jest sta�e.
	blok.getPosition();	
	
	system("PAUSE");
	return 0;
}
