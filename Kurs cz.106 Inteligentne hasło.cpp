#include <iostream>
#include <conio.h> // getch, �eby nie u�ywa� cin.ignore() tak wiele razy.
#include <cstring>

using namespace std;

void Zakanczacz(); // procedura, deklaracja, zako�czenie pracy programu.
void Haslo(); // Spr. czy dane has�o jest "inteligentne". Wczytanie has�a.

char tn[1]; // tablica T lub N.
char haslo[25]; // Ci�g znak�w, razem string, has�o.
short dl; // D�ugo�� has�a.
int i, j, k, l; // Liczniki sprawdzaj�ce, co u�ytkownik poda�.

int main()
{
	/*
		Sprawdzanie, czy dany wyraz jest inteligentnym has�em.
		Inteligentne has�o:
			- Du�e, ma�e literki.
			- Cyfry.
			
		Program trwa do momentu zako�czenia przez u�ytkownika.
		
		Zakanczacz:
			do tablicy zapisanie t lub n
			powi�kszenie toupper podanej literki, czyli tn[0]
			Je�eli tn[0] == T, zako�czenie
			tn[0] == N, wywo�anie g��wnej funkcji main().
			Je�eli podano zamiast T,t,n,N co� innego, to ponowne wywo�anie Zakanczacza.
			
			
		Haslo:
			Niesko�czona p�tla while:
				Przypisanie zer do licznik�w, s� to zmienne globalne, wi�c automatycznie mia�y by� przypisane zera 
				w przypadku braku ich definicji podczas deklaracji, ale tak na wszelki wypadek.
				U�ytkownik wiele razy mo�e wprowadza� has�o, wi�c za ka�dym razem chcemy mie� liczniki na 0.
				Pobieranie has�a od u�ytkownika.
				Sprawdzenie jego d�ugo�ci do zmiennej dl.
				P�tla while, dop�ki i mniejsze od d�ugo�ci has�a:
					Sprawdzanie wszystkich znak�w.
					Liczniki powi�kszaj� si�, je�eli s� spe�niane warunki inteligentnego has�a.
					Postawione przedzia�y, np. od a do z lub od A do Z lub od 0 do 9 s� mo�liwe dzi�ki 
					faktowi istnienia tablicy ASCII.
				Wypisywanie w zale�no�ci od warto�ci licznik�w, czego u�ytkownik jeszcze nie poda� w ha�le.
	*/
	
	Haslo();
	
	
		
	Zakanczacz();
	getchar();
	system("PAUSE");
	return 0;
}

void Zakanczacz()
{
	cout << endl;
	cout << "Czy chcesz zakonczyc program? (T/N)" << endl;
	cin >> tn;
	
	tn[0] = toupper(tn[0]);
	cout << endl;
	
	if (tn[0] == 'T')
	{
		cout << "Koniec pracy programu" << endl;
		getch();
	} else if (tn[0] == 'N')
	{
		main();
	} else
	{
		Zakanczacz();
	}
}

void Haslo()
{
	while(true)
	{
		j = 0; k = 0; l = 0; i = -1;
		
		cout << "Podaj \"madre\" haslo: " << endl;
		cin >> haslo;
		
		dl = strlen(haslo);
		while(i < dl)
		{
			i++;
			
			if(haslo[i] >= '0' && haslo[i] <= '9')
				j++;
		
				
			if(haslo[i] >= 'a' && haslo[i] <= 'z')
				k++;
				
				
			if(haslo[i] >= 'A' && haslo[i] <= 'Z')
				l++;
				
			if(j != 0 && k != 0 && l != 0)
				break;
		}
		
		if(j != 0 && k != 0 && l != 0)
		{
			cout << endl;
			cout << "Haslo jest inteligentne" << endl;
			break;
		}
		
		if(j == 0)
			cout << "Nie wpisales zadnej cyfry" << endl;
			
		if(k == 0)
			cout << "Nie wpisales zadnej malej literki" << endl;
			
		if(l == 0)
			cout << "Nie wpisales zadnej duzej literki" << endl;
			
		cout << endl;
	}
}
