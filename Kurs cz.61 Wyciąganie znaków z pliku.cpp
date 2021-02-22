#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		Funkcje do wyci�gania znak�w:
	
		getline(miejsce przechowywania pobranych warto�ci, ile ma pobra� znak�w, ogranicznik)
		Funkcja ta ma ustawiony 3-ci argument jako domy�lny, ogranicznik do ko�ca linii (dlatego
		getline).
		1-wszy argument to zmienna typu wska�nik, do kt�rej b�d� zapisywane pobierane znaki.
		2-gi, to ile ma pobra� znak�w.
		getline pobiera ogranicznik i go usuwa.
		getline - pobierz po prostu linia za lini�, je�eli po drodze nie ma �adnych b��d�w.
		
		
		
		
		get dzia�a w inny spos�b troch�:
		np. same inicja�y.	
		ignore	
		get (miejsce przechowywania pobranych warto�ci, ile ma pobra� znak�w, ogranicznik)
		get nie pobiera ogranicznika ani go nie usuwa.
		
		ignore(ile ma wyci�gn�� (zignorowa� znak�w), ogranicznik)
		
	*/
	fstream file;	
	file.open("test.txt", ios::in | ios::binary);
	if (file.is_open())
	{
		char first, last;
		char tmpName[30];
		char tmp[50] = {0};
		cin.getline(tmp, 50); // Pobieranie ze strumienia, bufora. Znaki z klawiatury.
		
		cout << "cin.getline(tmp, 50); : " << endl;
		cout << tmp << endl;
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		
		cout << "while(file.getline(tmp, 50)): " << endl;
		tmp[50] = {0};	
		while(file.getline(tmp, 50))
			cout << tmp << endl;

		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		
		file.clear();
		file.seekg(0);
		tmp[50] = {0};
		file.get(tmp, 50);
		cout << "file.get(tmp, 50); : " << endl;	
		cout << tmp << endl;
		
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		
		cout << "Inicjaly: " << endl;
		file.clear();
		file.seekg(0);
		/*
			Ignoruje 100 znak�w do napotkania spacji, po pobraniu ju� pierwszej litery,
			napotyka liter� i jest drugi inicja�. 
			Dalej ignoruje 100 znak�w do napotkania nowej linii, i proces startuje od pocz�tku
			a� do ko�ca pliku eof.
		*/
		do
		{
			first = file.get();
			cout << "Pierwsza litera: " << endl;	
			cout << first << endl;
			file.ignore(100, ' ');	// Ignore 100 znak�w, chyba �e napotka spacje	
			last = file.get();	
			file.ignore(100, '\n'); // Ignore 100 znak�w, chyba �e napotka enter	
			cout << "Druga litera: " << endl;	
			cout << last << endl;	
			cout << "===================================" << endl;		
		} while(!file.eof());
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		file.clear();
		file.seekg(0);
		last = {0};
		cout << "Inicjaly 2: " << endl;		
		do
		{
			file.get(tmpName, 30, ' ');
			cout << "Imie: " << endl;	
			cout << tmpName << endl;
			file.ignore(1, ' ');
			last = file.get();	
			file.ignore(100, '\n'); 	
			cout << "Druga litera: " << endl;	
			cout << last << endl;	
			cout << "===================================" << endl;		
		} while(!file.eof());		
		
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}
