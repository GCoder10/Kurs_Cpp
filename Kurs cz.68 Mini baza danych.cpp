#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

struct Czlowiek
{
	string imie;
	string nazwisko;
	short wiek;	
	string telefon;	
};

short ileDodanoOsob;
Czlowiek ludzie[20];

void wymagajEnter(); // Procedura, nic nie zwraca, deklaracja
void dodajOsobe();
void pokazOsoby();
void zapiszOsobyDoPliku();
void wczytajOsobyZPliku();
void przeszukajBaze();

int main()
{
	/*
		CRUD C++	 
		
		getch() - funkcja w conio.h
		Pobiera natychmiast, co jest w wej�ciu, samo get pozwoli na wpisanie
		czego� d�ugiego do bufora.
		
		
		system("cls");	- czyszczenie konsoli. Biblioteka stdlib.h
		
		Includowanie: <> - w ustawieniach kompilatora jest lokalizacja bardziej sprecyzowana,
		do naszych lokalnych plik�w projektowych: ""
		
		
		Stworzenie struktury reprezentuj�cej osob�.
		Nie tylko zapis do pliku ale trzeba przechowywa� dane os�b w programie.
		
		ludzie[20] - 1-dno wymiarowa tablica typu Czlowiek. Globalna zmienna.
		Globalne zmienne bez podania startowej warto�ci z automatu przyjmuj� 0 w 
		przeciwie�stwie do zmiennych lokalnych.
		
		
		Po wprowadzeniu kilku os�b zapisanie ich danych do pliku.
		Potrzebujemy samo zapisywanie, wi�c wystarczy ofstream, output, do pliku.
		Biblioteka fstream
		
		
		Dane w pliku txt mo�na tokenizowa�, rozdziela� od siebie.
		W tym przypadku takim tokenem jest ENTER.
		
		
		Wczytywanie danych os�b z pliku txt ifstream klasa
		Input, wczytywanie z pliku do programu, tylko tyle tutaj potrzeba.
		Korzystanie z while(!file.eof());, End Of File.
		Robienie czego� w p�tli do while do ko�ca pliku.
		
		
		
		Przeszukaj baze:
		Szukanie po imieniu.
		Szukanie po rekordach w tymczasowej bazie w programie po za�adowaniu pliku txt 
		z danymi.
		
	*/
	char tescior;
	
	
	do
	{
		cout << "Osob w bazie: "           << ileDodanoOsob << endl;
		cout << "MENU: "                   << endl;
		cout << "1. Dodaj osobe "          << endl;
		cout << "2. Pokaz osoby "          << endl;
		cout << "3. Zapisz osoby do pliku" << endl;
		cout << "4. Wczytaj osoby z pliku" << endl;
		cout << "5. Przeszukaj baze"       << endl;
		
		tescior = getch();
		
		switch(tescior)
		{
			case '1':
				cout << "1. Opcja" << endl;
				dodajOsobe();
				break;
			case '2':
				cout << "2. Opcja" << endl;
				pokazOsoby();
				break;
			case '3':
				cout << "3. Opcja" << endl;
				zapiszOsobyDoPliku();
				break;
			case '4':
				cout << "4. Opcja" << endl;
				wczytajOsobyZPliku();
				break;
			case '5':
				cout << "5. Opcja" << endl;
				przeszukajBaze();
				break;
		}	
		
		wymagajEnter();
		system("cls");	
	}
	while(tescior != 27); // ASCII 27 znak ESC, program zako�czy si� dopiero po klikni�ciu ESC.

	
	

	system("PAUSE");
	return 0;
}

void wymagajEnter() // Definicja procedury
{
	cout << "Wcisnij ENTER, aby kontynuowac. " << endl;
	while(getch() != 13); // 13 w ASCII = ENTER
}

void dodajOsobe()
{
	cout << "Podaj imie: " << endl;
	cin  >> ludzie[ileDodanoOsob].imie;
	
	cout << "Podaj nazwisko: " << endl;
	cin  >> ludzie[ileDodanoOsob].nazwisko;
	
	cout << "Podaj wiek: " << endl;
	cin  >> ludzie[ileDodanoOsob].wiek;
	
	cout << "Podaj telefon: " << endl;
	cin  >> ludzie[ileDodanoOsob].telefon;	
		
	ileDodanoOsob++; // POSTinkrementacja, ++zmienna - PREinkrementacja.
}

void pokazOsoby()
{
	if (ileDodanoOsob > 0)
	{
		for (int j = 0; j < ileDodanoOsob; j++)
		{
			cout << "================================="<< endl;
			cout << "Osoba nr. " << (j+1)              << endl;
			cout << "Imie: "     << ludzie[j].imie     << endl;
			cout << "Nazwisko: " << ludzie[j].nazwisko << endl;
			cout << "Wiek: "     << ludzie[j].wiek     << endl;
			cout << "Telefon: "  << ludzie[j].telefon  << endl;
			cout << "================================="<< endl;
		}
	}
	else
		cout << "Baza danych jest pusta" << endl;
}

void zapiszOsobyDoPliku()
{
	ofstream file("baza.txt");
	
	if (file.is_open())
	{
		file << ileDodanoOsob << endl;
		for (int j = 0; j < ileDodanoOsob; j++)
		{
			file <<  ludzie[j].imie     << endl;
			file <<  ludzie[j].nazwisko << endl;
			file <<  ludzie[j].wiek     << endl;
			file <<  ludzie[j].telefon  << endl;
		}
		
		file.close();		
	}
	else
	{
		cout << "Plik nie zostal otwarty poprawnie" << endl;
	}
}

void wczytajOsobyZPliku()
{
	ifstream file("baza.txt");
	
	if (file.is_open())
	{
		file >> ileDodanoOsob;
		
		/*
		for (int i = 0; i < ileDodanoOsob; i++)
		{
			file >> ludzie[i].imie;
			file >> ludzie[i].nazwisko;
			file >> ludzie[i].wiek;
			file >> ludzie[i].telefon;
		}
		*/
		int i = 0;
		do
		{
			file >> ludzie[i].imie;
			file >> ludzie[i].nazwisko;
			file >> ludzie[i].wiek;
			file >> ludzie[i].telefon;
			i++;			
		}
		while(!file.eof());
			
		file.close();
	}
	else
	{
		cout << "Nie udalo sie otworzyc pliku." << endl;
	}
}

void przeszukajBaze()
{
	if (ileDodanoOsob != 0)
	{
		string imie;
		cout << "Podaj imie do wyszukania: " << endl;	
		cin  >> imie;
		
		
		for (int j = 0; j < ileDodanoOsob; j++)
		{
			if (imie == ludzie[j].imie)
			{
				cout << "=============Szukanie============"<< endl;
				cout << "Osoba nr. " << (j+1)              << endl;
				cout << "Imie: "     << ludzie[j].imie     << endl;
				cout << "Nazwisko: " << ludzie[j].nazwisko << endl;
				cout << "Wiek: "     << ludzie[j].wiek     << endl;
				cout << "Telefon: "  << ludzie[j].telefon  << endl;
				cout << "================================="<< endl;				
			}
		}
	}
	else
		cout << "Nie ma nikogo w bazie" << endl;
}
