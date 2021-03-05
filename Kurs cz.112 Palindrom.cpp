#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
		Przyk�ady palindrom�w:
			kajak
			ala
			zaraz
			1331
			Anna
			
			
		Czytany wyraz jest taki sam czytany w jedn� jak i w drug� stron�.
		
		Algorytm sprawdzaj�cy, czy podane s�owo jest palindromem.
		
		
		Pierwszy znak do por�wnania z ostatnim itd.
		�rodkowy jak jest to sam ze sob�.
		
		Instrukcja break przerywa wykonywanie p�tli, jak ju� znajdzie jedn� r�nic�.
	*/
	string slowo;
	bool palindrom = true;
	
	cin >> slowo;
	cin.ignore();
	
	cout << "Dlugosc slowa (ze znakiem konca linii \\0): " << slowo.length() << endl;
	cout << "Dlugosc slowa (bez znaku konca linii \\0): " << slowo.length() - 1 << endl;


	for(int i = 0; i < slowo.length() / 2; i++)
		if(slowo[i] != slowo[slowo.length() - 1 - i])
		{
			palindrom = false;	
			break;
		}
				



	if(palindrom == true)
		cout << slowo << " jest palindromem" << endl;
	else
		cout << slowo << " nie jest palindromem" << endl;


	getchar();
	system("PAUSE");
	return 0;
}
