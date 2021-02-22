#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		tellg - tell get - powiedz, gdzie jest ustawiony wska�nik get (odczytu).
		seekg - seek get - ustaw wska�nik na pozycji... (zapisu).
		file >> buffer; - odczyt z pliku automatycznie ustawiony jest na samym pocz�tku.
		ios::in || ios::app - wska�nik na samym ko�cu b�dzie.
		
		
		
		
		�eby wyniki uzyskiwane przy pomocy tellg i seekg by�y jak najbardziej poprawne, nale�y
		korzysta� podczas otwierania pliku z flagi ios::binary.
		
		
		dla seekg mo�na jeszcze ustawia� flagi:
		ios::end - od ko�ca
		ios::beg (begin)- od pocz�tku
		ios::cur (current)- od momentu sko�czenia
		

		seekg(warto��_o_ile_ma_przesun��_od_momentu_flagi, flaga);
		ios::beg - domy�lna flaga dla seekg
		
		
		
		ofstream - klasa ta nie zawiera tellg, seekg.
	*/
	fstream file;	
	file.open("test.txt", ios::in | ios::binary);
	if (file.is_open())
	{
		
		string buffer;
		streampos sizeOfFile; //Klasa przechowuj�ca pozycje
		file.seekg(0, ios::end);
		sizeOfFile = file.tellg();
		cout << "Size of file is: " << sizeOfFile << " bytes" << endl;
		
		file.clear();
		file.seekg(0);
		do 
		{
			file >> buffer;
			cout << buffer << endl;
					
		} while (!file.eof());
		
		
		cout << "file.rdstate(): " << endl;
		cout << file.rdstate() << endl;
		
		
		if ((file.rdstate() ^ ifstream::eofbit) == 0)
			file.clear();
		
		if (file.good())
		{
			cout << "[1]good file >> buffer string" << endl;
			cout << "Operacja wykonana prawidlowo" << endl;
			cout << "Dalsze instrukcje do wykonania, jezeli z plikiem jest okej" << endl;
			
			
			cout << "Gdzie jest wskaznik odczytu: " << endl;
			cout << file.tellg() << endl;
			
			
			cout << "Na co wskazuje teraz wskaznik w pliku (22): " << endl;
			file >> buffer;
			cout << buffer << endl;
			
			
			file.clear();
			file.seekg(0);
			cout << "wskaznik w pliku ustawiony na 0 bajt (Testowy): " << endl;
			file >> buffer;
			cout << buffer << endl;
		
			
			cout << "Gdzie jest wskaznik odczytu: " << endl;
			cout << file.tellg() << endl;
			
			
			cout << endl;
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
			file.seekg(-4,ios::end); // o ile przesun�� wska�nik odczytu od ko�ca pliku
			// -5 5 bajt�w minus od ko�ca, 5 - 5 bajt�w plus od ko�ca.
			cout << "wskaznik w pliku ustawiony na -4 bajt od konca(u): " << endl;
			file >> buffer;
			cout << buffer << endl;
			cout << "Gdzie jest wskaznik odczytu: " << endl;
			cout << file.tellg() << endl;						
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	
	

	system("PAUSE");
	return 0;
}
