#include <iostream>
#include "Kopiarka.h"

using namespace std;

int main(int argc, char** argv) 
{
	/*
		Kurs cz.47 Konstruktor kopiuj�cy 
	*/
	int a = 10;
	int b = a; // To nie jest referencja na a, warto�� pocz�tkowa a jest przechowywana w innym miejscu w pami�ci (zmienna b).
	
	a = 40;
	
	cout << "Wartosci a = 40, b = 10: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	Kopiarka obj(10, 20); // obj = obiekt = instancja klasy
	Kopiarka obj2 = obj; // Jest to robota konstruktora niejawnego, tzw. konstruktor kopiuj�cy.
	// Przypisywanie do siebie obiekt�w pochodz�cych z instancji tej samej klasy.
	
	
	/*
		Taki konstruktor niejawny dzia�a do momentu utworzenia wska�nika w klasie Kopiarka.
		
	*/
	
	cout << "Kopiarka obj(10, 20); " << endl;
	cout << "obj.x(10) = " <<  obj.x << endl;
	cout << "obj.y(20) = " <<  obj.y << endl;
	
	cout << "Kopiarka obj2 = obj; " << endl;
	cout << "obj2.x(10) = " <<  obj2.x << endl;
	cout << "obj2.y(20) = " <<  obj2.y << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
		

	Kopiarka obj3(15, 200, 9);
	Kopiarka obj4 = obj3;
	// Instancje klasy, obiekty, powinny by� osobne, wi�c po drodze powinni�my m�c
	// modyfikowa� ich przechowywane warto�ci:
	// obj3.x = 50; po przekopiowaniu obiektu na drugi obiekt tylko w obj3.x dochodzi do zmiany, 
	// czyli faktycznie s� one oddzielne i niezale�ne np. na zmiany w przysz�o�ci, ale zmiany na
	// wsk powoduj� zmiany wsz�dzie bo wsk wskazuj� na ten sam adres pomimo pochodzenia wsk z 
	// innych instancji.
	obj3.x = 50;	
	cout << "Kopiarka obj3(15, 200, 9); " << endl;
	cout << "obj3.x(15) = "             <<  obj3.x      << endl;
	cout << "obj3.y(200) = "            <<  obj3.y      << endl;
	cout << "obj3.wsk(9)[Adres] = "     <<  obj3.wsk    << endl;
	cout << "obj3.wsk(9)[Wartosc] = "   <<  *(obj3.wsk) << endl;
	cout << endl;
	cout << "Kopiarka obj4 = obj3; " << endl;
	cout << "obj4.x(15) = "             <<  obj4.x      << endl;
	cout << "obj4.y(200) = "            <<  obj4.y      << endl;	
	cout << "obj4.wsk(9)[Adres] = "     <<  obj4.wsk    << endl;
	cout << "obj4.wsk(9)[Wartosc] = "   <<  *(obj4.wsk) << endl;
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
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	*(obj3.wsk) = 10200;	
	cout << "Kopiarka obj3(15, 200, 9); " << endl;
	cout << "obj3.x(15) = "             <<  obj3.x      << endl;
	cout << "obj3.y(200) = "            <<  obj3.y      << endl;
	cout << "obj3.wsk(9)[Adres] = "     <<  obj3.wsk    << endl;
	cout << "obj3.wsk(9)[Wartosc] = "   <<  *(obj3.wsk) << endl;
	cout << endl;
	cout << "Kopiarka obj4 = obj3; " << endl;
	cout << "obj4.x(15) = "             <<  obj4.x      << endl;
	cout << "obj4.y(200) = "            <<  obj4.y      << endl;	
	cout << "obj4.wsk(9)[Adres] = "     <<  obj4.wsk    << endl;
	cout << "obj4.wsk(9)[Wartosc] = "   <<  *(obj4.wsk) << endl;	

	// Czyli trzeba stworzy� w�asny konstruktor kopiuj�cy,
	// bo ten niejawny kopiuje dos�ownie wszystko, skopiowa� wsk, dobrze co prawda, ale
	// ten sam adres (wska�nik przechowuje adres wi�c go dos�ownie skopiowa�), czyli w sumie
	// robi kopi� modyfikuj�c� orygina� w przysz�o�ci.
	
	
	
	system("PAUSE");
	return 0;
}
