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
	fstream myFileHandler;
	
	myFileHandler.open("test.txt");
	if (myFileHandler.is_open())
	{
		cout << "Plik zostal poprawnie otwarty" << endl;
		
		myFileHandler << "Testowy tekst id�cy do pliku 22";
		
		myFileHandler.close();
	}		
			
	
	system("PAUSE");
	return 0;
}
