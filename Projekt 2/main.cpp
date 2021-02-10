#include "biblioteka.h"
#include "biblioteka.h"
#include "biblioteka.h"
#include "biblioteka.h"
#include "biblioteka.h"


#define PI 3.14


int main(int argc, char** argv) 
{
	/*
		Projekt wieloplikowy
		Gdyby trzyma� ca�y kod �r�d�owy to ka�da zmiana wymaga�a by przekompilowania np. 1000 linijek kodu.
		#include <iostream>
		# oznacza, �e zaraz b�dzie instrukcja preprocesora. 
		Preprocesor wywo�ywany jest najpierw i wykonuje si� przed sam� kompilacj�.
		#define PI 3.14 Najpierw przed kompilacj� podmieni� wsz�dzie PI na 3.14
		Czyli to s� instrukcje preprocesora.
		#include <iostream> - "wklejenie" wszystkiego, co znajduje si� w pliku iostream.
		W iostream tak�e znajduj� si� kolejne #include, czyli dalej, umieszczanie kodu z innych plik�w.
		Ostatecznie tutaj l�duje du�o kodu z wielu plik�w przy pomocy tylko jednego #include.
		Ale tych rzeczy importowanych przy pomocy #include ju� nie trzeba rekompilowa� a tego mo�e
		by� naprawd� du�o.
		
		
		Mo�emy tworzy� w�asne pliki i je #include'owa�
		biblioteka.h nazywa si� nag��wkiem, header, bo jest na g�rze pliku #include
		#include <iostream>
		U�ywamy < i >, poniewa� kompilator ma ju� ustawione, sk�d pobiera� iostream
		#include "biblioteka.h" 
		" i ", oznacza, �e plik jest w danym katalogu, w kt�rym teraz jest, kompilator, czyli tutaj
		folder projektu.
		
		
		W jednej bibliotece.h mo�na np. z includowa� wszystkie rzeczy, jakie b�dziemy chcieli importowa�
		i wtedy zachowa� porz�dek w g��wnym pliku projektu.
		
		
		#include <iostream>
		#include <iostream>
		#include <iostream>
		#include <iostream>
		#include <iostream> --- brak b��du
		#include "biblioteka.h" 
		#include "biblioteka.h"  -- b��d
		#include "biblioteka.h" 
		#include "biblioteka.h" 
		
		
		Poniewa� w iostream jest pewne "zabezpieczenie":
			#ifndef _GLIBCXX_IOSTREAM - je�eli nie zdefiniowano "{",
			Je�eli ju� zosta�o zdefiniowane, to wszystko zostanie pomini�te pomi�dzy
			ifndef a endif
			#define _GLIBCXX_IOSTREAM 1 - zdefiniuj
			
			...
			
			zako�czenie if'a
			#endif /* _GLIBCXX_IOSTREAM */ //"}"
	/*
			Sw�j przyk�ad w biblioteka.h
			To co przed ifndef i po endif si� wykona
			Teraz mo�na includowa� nawet wiele bibliotek.h pod rz�d i wszystko dzia�a
			poprawnie.
			
			Gdy w projekcie mamy wiele plik�w to wypada uzywa� opcji "Przebuduj wszystko".
			Wtedy wszystkie pliki zostan� przekompilowane na nowo
			Opcja "Kompiluj i uruchom" skupia si� g��wnie na aktualnie otwartym pliku
			
			W nag��wku biblioteka powinny znajdowa� si� same deklaracje.	
	*/
	/*
			Funkcje/procedury maj� dodane automatycznie extern void, dlatego z biblioteka.h
			dzia�a procedura/funkcja w innym pliku.
			Przy zmiennych:
				extern int a;
			Nie mo�na od razu nada� warto�ci.
			To jest tylko informacja, �e gdzie� b�dzie istnia�o takie a
			Nie rezerwuje 4 bajt�w pami�ci.
			Wi�c nie mo�na czego� przypisa�.
			extern int a; - to jest tylko deklaracja etykiety, wi�c mo�na tak napisa� wiele razy
			pod rz�d.
	*/
	/*
			extern int b m�wi tylko, �e ta zmienna zosta�a zdefiniowana gdzie� w innym pliku w projekcie.
			Plik nag��wkowy biblioteka.h - same deklaracje najlepiej
			Plik biblioteka.cpp - definicje
			import wszystkiego do pliku g��wnego projektu main.cpp
			i praca wtedy tylko z tym plikiem.
	*/
	cout << "#define PI 3.14: " << endl;
	cout << "PI: " << PI << endl;
	
	cout << "Zmienna a z biblioteka.h: " << endl;
	cout << "a: " << a << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz z biblioteka.h: " << endl;
	cout << "wypisz(): " << endl;
	wypisz();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz2 z biblioteka.h: " << endl;
	cout << "wypisz2(): " << endl;
	wypisz2();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Zmienna b zdefiniowana w biblioteka.cpp i wyexternowana przez biblioteka.h: " << endl;
	cout << "b: " << b << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz3 z biblioteka.h (definicja w pliku biblioteka.cpp): " << endl;
	cout << "wypisz3(): " << endl;
	wypisz3();
		
	
	system("PAUSE");
	return 0;
}

void wypisz2() // Definicja procedury z biblioteka.h
{
	cout << "cosik2" << endl;
}
