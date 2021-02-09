#include <iostream>
#include <string>
// h - header - nag��wek. Do niskopoziomowych zaj�� ze string.
#include <string.h>

using namespace std;


int main(int argc, char** argv) 
{
	/*
		argc - arguments counter - licznik argument�w
		argv - arguments value - warto�ci tych argument�w
		
		Przyjmowane parametry z zewn�trz, gdy uruchamiamy program.exe
		przy pomocy cmd i przekazujemy parametry do programu, np.
		program.exe a b c d
		argc jest zawsze r�wny przynajmniej 1, poniewa� w argv musi by� co najmniej
		przechowywana jedna warto��.
		T� warto�ci� jest �cie�ka lub nazwa naszego programu.
		
		
		Po wpisaniu w cmd program.exe a b c d, argc wynosi 5 (1 + 4)
		Po wpisaniu w cmd program.exe w argv[0] przechowywana jest warto�� b�d�ca 
		nazw� naszego programu.
		
		
		
		Mo�na napisa� p�tl� wypisuj�c� to, co znajduje si� w argv bo mamy przecie� argc licz�ce
		ile razem jest przekazywanych parametr�w do programu.
	*/	
	int a = 5;
	
	if (a == 10)
	//	return EXIT_FAILURE;
		return 1;
		
	// Generalnie arg[] i arg2 s� wska�nikami, tablicami, na 1-wszy element
	char arg[] = {'a', 'b', 'c'};
	char *arg2 = "ciag znakow";
	// tablica string�w
	// �eby np. dosta� si� do poszczeg�lnej literki trzeba zastosowa�
	// poj�cie tablicy dwuwymiarowej, np. arg3[0][2] to = a
	char *arg3[] = {"ciag znakow a", "ciag znakow b", "ciag znakow c"};
	
	string napis = arg3[0];
	
	cout << "ciag znakow a: ";
	cout << napis << endl;
	cout << "Literka a arg3[0][2] to = a: ";
	cout << arg3[0][2] << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "argc: " << endl;
	cout << argc << endl;
	cout << "Wartosc przechowywana w argv[0]: " << endl;
	cout << argv[0] << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	// Projekt odpalany przy pomocy cmd.
	// cd lokalizacjaProjektu
	// dir
	// plik .exe stworzony podczas kompilacji mo�na wywo�a�
	// nazwa.exe a b c d
	// W tym momencie do programu zosta�y wys�ane parametry
	// Wszystkie te parametry znajduj� si� w�a�nie w argc
	
	
	
	
	// argv - wska�nik na wska�nik
	// argc-- - POSTdekrementacja, pierw sprawdzi, potem -- i wy�wietli
	// dopiero argc = 0 b�dzie stop wykonywanej p�tli
	// *argv++ - wy�uskiwanie kolejnych warto�ci kryj�cych si� pod adresami przechowywanymi w argv
	// 1. Wy�wietli 2. POSTinkrementacja
	int tmpArgc = argc;
	char** tmpArgv = argv;
	cout << "Wartosci przechowywane w argv: " << endl;	
	while(tmpArgc--)
		cout << *tmpArgv++ << endl;
		
	tmpArgc = argc;
	tmpArgv = argv;
		
	cout << "Wartosci przechowywane w argv, wiecej: " << endl;	
	while(tmpArgc--)
	{
		napis = *tmpArgv;
		if (napis == "aa")
			cout << "[KOMUNIKAT] aa w przekazanych parametrach do programu w cmd" << endl;
			
		
		// strcmp - StringCompare, 2 argumenty, == 0, czyli s� r�wne
		if (strcmp(*tmpArgv, "aa") == 0)
			cout << "[KOMUNIKAT strcmp] aa cmd inne porownanie" << endl;
		
		cout << *tmpArgv++ << endl;
	}
	
	
	
	
	
	system("pause");
	return 0;
	//return EXIT_SUCCESS;
	// return EXIT_FAILURE // = return 1		
	return 0;
}
