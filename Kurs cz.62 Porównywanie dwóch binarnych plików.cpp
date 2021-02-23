#include <iostream>
#include <fstream>
#include "string.h" // Dla funkcji memcmp - Memory Compare - por�wnuje blok pami�ci.

using namespace std;


bool areFilesEqual(fstream *, fstream *); // Funkcja zwracaj�ca warto�� bool (true/false). Parametry: Wska�niki na zmienne plikowe, instancje klasy fstream, ich adresy.
int sizeOfFile(fstream *);


int main()
{
	/*
			read(gdzie zapisa�, ile bajt�w);
			funkcja read() - czytanie zawarto�ci plik�w.
			Kiedy chcemy przeczyta� ka�dy bia�y znak, np. obrazki.
			Nie ma tutaj mo�liwo�ci pomijania, np. 100 znak�w a� do 
			napotkania czego� (ogranicznik�w).
				
				
			Zastosowanie por�wnywania:
			-Sprawdzanie duplikat�w, plik�w, obrazk�w, tekst�w.
	*/
	fstream file;	
	file.open("test5.txt", ios::in | ios::binary | ios::ate);
	if (file.is_open())
	{
		// Dzi�ki fladze ios::ate (At The End) wska�nik znajdzie si� na ko�cu, mo�na pobra�
		// jego pozycje, zwr�ci ca�kowit� wielko�� pliku.
		// tell get - wska�nik odczytu.
			int sizeOfFile = file.tellg();
		
		
			char *buffer = new char[sizeOfFile]; //Dynamicznie alokowana pami��, tablica, rezerwacja w pami�ci okre�lonego miejsca koniecznie
			// obok siebie. Je�eli takie miejsce nie zostanie znalezione, to new char zwr�ci NULL - brak pami�ci.
			// Wska�nik buffer na 1-wszy element tablicy, nazwa tablicy to samo = wska�nik.
			// zwolnienie koniecznie tak dynamicznie alokowanego miejsca w pami�ci przy pomocy delete.
			
			
			// Wielko�� odczytana, przestawienie wska�nika odczytu seek get na pocz�tek pliku.
			// flaga ios::beg - begin - 0 od pocz�tku
			file.clear();
			file.seekg(0, ios::beg);
			
			
			file.read(buffer, sizeOfFile); 
			
			
			cout << "Zawartosc test5.txt" << endl;
			cout << buffer << endl;
			
			
			
			
			
			delete []buffer;
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	file.close();
	
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	fstream file1, file2;	
	file1.open("test5.txt", ios::in | ios::binary);
	file2.open("test6.txt", ios::in | ios::binary);
	if (file1.is_open() && file2.is_open())
	{
		cout << "Porownywanie dwoch plikow binarnych: " << endl;
		
		
		if (areFilesEqual(&file1, &file2))
			cout << "Pliki sa identyczne" << endl;
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}

bool areFilesEqual(fstream * file1, fstream * file2)
{
	int fileSize1 = sizeOfFile(file1);
	int fileSize2 = sizeOfFile(file2);
	
	
	if (fileSize1 == fileSize2)
	{	
		int BUFFER_SIZE;
		
		if (fileSize1 > 1024)
			BUFFER_SIZE = 1024; // 1MB
		else
			BUFFER_SIZE = fileSize1;
		
		char *file1buffer = new char[BUFFER_SIZE];
		char *file2buffer = new char[BUFFER_SIZE];
		
		
		do
		{
			file1->read(file1buffer, BUFFER_SIZE); // Czytanie z pliku do tablicy typu char file1buffer.
			file2->read(file2buffer, BUFFER_SIZE);
			
			
			if (memcmp(file1buffer, file2buffer, BUFFER_SIZE) != 0)
			{
				cout << "Pliki nie sa rowne." << endl;
				
				
				delete []file1buffer;
				delete []file2buffer;
				
				return false;
			}			
		} while(file1->good() && file2->good());
		// Wykonywanie p�tli do while, dop�ki wszystko jest okej z plikami.
		// Nie b�dzie okej, gdy np. jeden z plik�w si� ju� sko�czy.
		// Takie lekkie zabezpieczenie na wypadek pracy z du�ymi plikami.
		

		delete []file1buffer;
		delete []file2buffer;
		
		return true;
	} 
	else
	{
		cout << "Pliki nie sa rowne. Maja inna wielkosc" << endl;
		return false;
	}
	
}

int sizeOfFile(fstream * file)
{
	// Wska�nik odczytu seek get ustawiany na koniec pliku.
	// Rozmiar pliku zapisany poprzez u�ycie tell get, gdzie jest wska�nik.
	// Powr�t koniecznie wska�nika odczytu seek get na pocz�tek pliku, flaga ios::beg.
	file->seekg(0, ios::end);
	int sizeOfFile = file->tellg();
	file->seekg(0, ios::beg);
	
	return sizeOfFile;
}
