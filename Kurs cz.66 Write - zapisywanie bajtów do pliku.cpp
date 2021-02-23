#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
			write - pisa�
			funkcja write zapisuje bajty do pliku.
			Po wpisaniu "Przykladowy tekst" za pomoc� funkcji write na ko�cu dopisany
			jest NUL (plik txt otwarty przy pomocy Notepad++).
			write zapisuje wszystko jak leci, nawet znak zako�czenia tekstu.
			
			
			write = niskopoziomowe operacje, gdy chcemy ustawi� jaki� bufor, itd.
			
			
			file.write(sample, sizeof(sample) - 1);
			- 1 �eby na ko�cu funkcja write nie dopisywa�a znaku zako�czenia tekstu (NUL)
	*/
	fstream file;	
	file.open("test.txt", ios::out | ios::binary);
	if (file.is_open())
	{
		char sample [] = "Przykladowy tekst";
		// file << sample;
		
		file.write(sample, sizeof(sample) - 1); // Parametr sample - wska�nik, sizeof rozmiar.
		// file.write(sample, 455);
		// write po wskazaniu na sample (wska�nik na 1-wszy element tablicy) i po wpisaniu
		// wielko�ci wi�kszej od rozmiaru sample, wczytane zostan� inne elementy z pami�ci (np. z 
		// innych program�w itd.) b�d�ce dalej za tablic� sample.
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}

	
	system("PAUSE");
	return 0;
}
