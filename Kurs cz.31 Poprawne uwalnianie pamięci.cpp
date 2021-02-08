#include <iostream>
#include <string>


using namespace std;


int main()
{
	/*
		string - ci�g znak�w.
		Ka�dy znak w ci�gu to char
		string - tablica typu characters
		char to 1 bajt
		D�ugo�� napisu = ilo�� bajt�w zarezerwowanych + 1, na ko�cu jest \0
		cout << string - wypisywanie do napotkania \0
	*/
	string napis = "coscosCosCos";
	cout << napis << endl;
	string napisDoPolowy = "coscos\0CosCos";
	cout << napisDoPolowy << endl;	
	
	
	for (int i = 0; i < napis.length(); i++)
	{
		cout << napis[i];
	}
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "char w string na pozycji nr. 3: " << napis[3] << endl;
	
	
	char tab[] = "inny ciag znakow";
	cout << "char w tab[] na pozycji nr. 5: " << tab[5] << endl;	
	
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	tab[5] = 'k';
	cout << "char w tab[] na pozycji nr. 5: " << tab[5] << endl;		
	cout << tab << endl;
	
	
	
	// Mo�emy wskaza� na pocz�tek tablicy
	// napis to jest adres tej tablicy typu znakowego
	// c_str() - zamienia string na struktur� u�ywan� w j�zyku C
	// const - brak modyfikacji warto�ci
	const char * wsk = napis.c_str();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Cala tablica napis: " << wsk << endl;
	cout << "Pierwszy element, na to wskazuje wskaznik wsk: " << *wsk << endl;
	cout << "Drugi element, wsk + 1: " << *(wsk + 1) << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// char to jaki� numer w tablicy ASCII, czyli prawda
	// tylko 0 jest fa�szem
	// *wsk++ POSTinkrementacja - najpierw sprawdzi, wy�wietli a na koniec doda 1, przesunie wska�nik o 1
	while (*wsk) 
		cout << *wsk++;	
		
	cout << endl;
	
	
	
	// Wska�nik wskazuj�cy na pocz�tek dynamicznie alokowanej tablicy rezerwuj�cej 20 miejsc obok siebie w pami�ci.
	// 20 bajt�w.
	// kiedy� mog�y by� jakie� warto�ci, ale zarezerwowali�my je.
	// Tworzenie stringa dynamicznie, poza programem.
	// \0 = musimy okre�li� koniec ci�gu.
	// new zwraca pierwszy adres w tym ci�gu miejsc.
	// Oryginalna tab napisek nie mo�e zmienia� adresu, na kt�ry wskazuje, dzi�ki czemu
	// podczas czyszczenia za pomoc� delete b�dzie czyszczone od pocz�tku.
	// W napisek warto�ci mo�na modyfikowa�.
	char * const napisek = new char[20];
	char * wskaznik = napisek;
	napisek[0] = 'a';
	napisek[1] = 'b';
	napisek[2] = 'c';
	napisek[3] = '\0';
	cout << napisek;
	cout << endl;
	
	// Po wykonaniu tej p�tli napisek ju� nie wskazuje na pierwszy znak.
	while (*wskaznik)
		cout << *wskaznik++;
	
	
	// delete wtedy wyczy�ci dopiero od miejsca napisek++, czyli od \0, abc zostawi.
	// NULL = �eby wska�nik nie wskazywa� na co�, co zosta�o ju� wyczyszczone.
	delete [] napisek;	
	wskaznik = NULL;
	cout << endl;
	
	char *p = "jakis tam ciag znakow";
	// p[0] = 'k'; - b��d
	
	
	
	char p2[] = "jakis tam ciag znakow p2";
	p2[0] = 'g';
	cout << p2;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	// Char - bardziej tak to wygl�da w C, dopiero potem ogarni�to string
	// W takim przypadku, �eby odwo�a� si� do pojedy�czej literki trzeba skorzysta� z tablicy
	// 2-wymiarowej
	// napis2 - adres pierwszej pozycji w tablicy typu string
	string napis2[10];
	napis2[0] = "napis2";
	napis2[1] = "napisMod2";
	napis2[2] = "napis3";
	cout << "Caly napis2: "                << *napis2      << endl;
	cout << "1-wszy indeks (napisMod2): "  << napis2[1]    << endl;
	cout << "Do pojedynczej literki (p): " << napis2[1][2] << endl;
	
	
	
	system("pause");
	return 0;
}
