#include <iostream>
#include <fstream>
#include "string.h"

using namespace std;

int main()
{
	/*
			read(gdzie zapisa�, ile bajt�w);
			funkcja read() - czytanie zawarto�ci plik�w.
			Kiedy chcemy przeczyta� ka�dy bia�y znak, np. obrazki.
			Nie ma tutaj mo�liwo�ci pomijania, np. 100 znak�w a� do 
			napotkania czego� (ogranicznik�w).
	*/
	fstream file;	
	file.open("test5.txt", ios::in | ios::binary);
	if (file.is_open())
	{
			
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}
