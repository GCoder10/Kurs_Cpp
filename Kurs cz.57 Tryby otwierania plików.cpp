#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		#include <fstream> file stream - potok plik�w, obs�uga plik�w.
		Utworzenie obiektu/instancji klasy fstream
		Otwieranie, zamykanie plik�w, trzeba pami�ta�.
		close() - zamkni�cie pliku, zwolnienie pami�ci, zasob�w.
		
		
	*/
	fstream file;
	
	file.open("test2.txt");
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
