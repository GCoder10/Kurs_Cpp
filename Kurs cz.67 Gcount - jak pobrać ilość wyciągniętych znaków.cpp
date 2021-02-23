#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		gcount - Getcharacter Count - pobierz ilo�� wyci�gni�tych znak�w z ostatniej operacji wyci�gania.
		
		z ostatniej operacji wyci�gania - czyli np. przy pomocy getline, read, ignore.
		
		Gdy wczytujemy wiele linii z pliku tekstowego lub czego� innego, to mo�emy chcie� wiedzie�, 
		ile znak�w ma ka�da linia.
		
	*/
	fstream file;	
	file.open("test.txt", ios::in | ios::binary);
	if (file.is_open())
	{
		char buffer[250];
		do
		{
			file.getline(buffer, 250);
			cout << buffer << endl << "^--Dlugosc--^: " << file.gcount() << endl;
		}
		while(!file.eof());
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}

	
	system("PAUSE");
	return 0;
}
