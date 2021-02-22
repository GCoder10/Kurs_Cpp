#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		tellp - tell put - powiedz, gdzie jest ustawiony wska�nik zapisu.
		seekp - seek put - ustaw wska�nik do zapisu na pozycji...
		
		
		dla seekp mo�na jeszcze ustawia� flagi:
		ios::end - od ko�ca
		ios::beg (begin)- od pocz�tku
		ios::cur (current)- od momentu sko�czenia
		

		seekp(warto��_o_ile_ma_przesun��_od_momentu_flagi, flaga);
		ios::beg - domy�lna flaga dla seekp
		
		
	*/
	fstream file;	
	file.open("test4.txt", ios::out | ios::binary);
	if (file.is_open())
	{
		string tmp = "Testowy tekst o niczym";
		
		file << tmp;

		cout << "Gdzie jest wskaznik zapisu: " << endl;
		cout << file.tellp() << endl;
		
		file.clear();
		file.seekp(0);
		cout << "wskaznik w pliku ustawiony na 0 bajt: " << endl;
		cout << "Gdzie jest wskaznik zapisu: " << endl;
		cout << file.tellp() << endl;	
		
		
		cout << endl;	
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		
		
		cout << "Podmiana czegos na nowej pozycji, samej literki lub czegos wiecej: " << endl;
		file << "TtTyYy";
		cout << "Gdzie jest wskaznik zapisu: " << endl;
		cout << file.tellp() << endl;
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}
