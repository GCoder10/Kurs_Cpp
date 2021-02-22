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
		
		=================================================================
		
		Flagi fstream, domy�lne flagi:
		fstream - ios::out | ios::in  (input, output stream, :: operator zasi�gu do 
		przestrzeni nazw out oraz in)
		
		=================================================================
		
		ios::out - output - wyj�cie - zapis
		ios::in - input - wej�cie - odczyt
		ios::trunc - truncate - ucinanie, ca�ej zawarto�ci.
		ios::ate - At The End - ustawi� pocz�tkow� pozycj�, wska�nik na koniec pliku.
		np. �eby zacz�� pisa� od samego ko�ca.
		Pozycje wska�nika mo�na zmienia�. 
		Mo�liwo�� czytania i zapisywania.
		ios::app - Append - do��czy� - zawarto�� jest do��czana na ko�cu pliku (nie da si� ju� zapisywa� gdzie indziej).
		nie mo�na usun�� zawarto�ci.
		ios::binary - tryb binarny - nie otwieramy jako plik tekstowy. 
		Mo�na otworzy� tak zdj�cia, archiwa.
		
		in, dane wchodz� do obiektu klasy fstream, odczyt
		out, dane wychodz� z instancji klasy fstream, zapis
		
		=================================================================
		
		Mo�emy zmienia� domy�lne zachowanie, w file.open("test2.txt");
		
		=================================================================

		file.open("test2.txt", ios::out); - sama flaga out,
		utworzy plik, gdy go nie ma.
		out automatycznie tworzy zawarto�� pliku od nowa.
		
		file.open("test3.txt", ios::out | ios::ate);
		Dlatego drugi raz zapis jest taki sam bo plik jest utworzony
		od nowa i wska�nik na ko�cu, czyli na pocz�tku, bo nic tam ju� 
		nie ma.
		
		file.open("test3.txt", ios::out | ios::ate | ios::in); - zatrzymanie
		usuwania, dopisanie do istniej�cej zawarto�ci na jej ko�cu.
		
		
		file.open("test3.txt", ios::out | ios::app | ios::trunc); - trunc
		nie zadzia�a, bo jest app.
		
		file.open("test3.txt", ios::out | ios::app | ios::binary); - wszystko
		nadpisze si� normalnie. Ka�dy plik jest plikiem binarnym. 
		
		=================================================================


		ofstream jest to klasa dziedziczona przez fstream, ma na starcie flage
		out,  
		
		ofstream - ios::out // Utworzy plik, gdy go nie ma.
		ifstream - ios::in // Sam nie utworzy pliku, gdy go nie ma.
		
		=================================================================

		ios::out | ios::in -> ��czenie flag
		| operator OR bitowy, sumy
		
		
	*/
	fstream file;
	
	file.open("test3.txt", ios::out);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	
	
	ofstream file2;
	
	file2.open("test4.txt");
	if (file2.is_open())
	{

	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	
			
			
	ifstream file3;
	
	file3.open("test5.txt");
	if (file3.is_open())
	{

	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	
	

	
	file.open("test3.txt", ios::out | ios::ate | ios::in);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}



	
	file.open("test3.txt", ios::out | ios::app | ios::in);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	



	file.open("test3.txt", ios::out | ios::app);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	
	


	file.open("test3.txt", ios::out | ios::app | ios::binary);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}
