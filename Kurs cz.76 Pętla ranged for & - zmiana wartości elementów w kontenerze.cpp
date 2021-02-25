#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		range - zakres
		
		
		Korzystamy z tej p�tli, aby zwi�kszy� czytelno�� kodu.
		for range - C++11
		
		
		
		
		for(int nr : wholeNumbers)
		Podajemy jako pierwszy parametr zmienn� tymczasow�, w kt�rej b�d� przechowywane 
		pobierane warto�ci z kontenera i drugi parametr - to jest zakres, czyli nazwa kontenera.
		Warto�ci z kontenera wypisujemy ze zmiennej tymczasowej p�tli.
		
		
		
	*/
	
	vector<int> wholeNumbers {20, 10, 4, -3, 25};
	vector<int>::iterator it = wholeNumbers.begin(); 
	
	
	
	cout << "Wypisanie elementow z vectora (for): " << endl;
	for (it; it != wholeNumbers.end(); it++)
	{
		auto nr = *it;
		cout << nr << endl;
	}	
	
	
	
	
	cout << "Wypisanie elementow z vectora (for range): " << endl;
	for(int nr : wholeNumbers)
		cout << nr << endl;
	
	
	
	
	cout << "Mnozenie elementow przez 10 (for range auto): " << endl;	
	cout << "Mnozenie elementow na tymczasowej zmiennej a nie na wartosciach w vectorze: " << endl;
	for(auto nr : wholeNumbers)
	{
		nr *= 10;
		cout << nr << endl;
	}
		
	
		
		
	cout << "Pomnozone elementy vectora wholeNumbers (for range auto): " << endl;	
	for(auto nr : wholeNumbers)
	{
		cout << nr << endl;
	}
	
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
	cout << endl;

	cout << "Mnozenie elementow przez 10 (for range auto): " << endl;	
	cout << "Mnozenie elementow poprzez referencje do wartosci w vectorze: " << endl;
	for(auto & nr : wholeNumbers)
	{
		nr *= 10;
	}
	
	cout << "Pomnozone elementy vectora wholeNumbers (for range auto): " << endl;	
	for(auto nr : wholeNumbers)
	{
		cout << nr << endl;
	}
			
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
	cout << endl;
	// B��d, const, nie mo�na wtedy zmienia� warto�ci w vectorze.
	for(/*const*/ auto & nr : wholeNumbers)
	{
		nr *= 10;
	}
	
	
	system("PAUSE");
	return 0;
}
