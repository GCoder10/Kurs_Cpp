#include <iostream>

using namespace std;

int main()
{
	/*
		putback
		Po�o�y� z powrotem na strumie�.
		
		Do wykorzystania np. gdy w programie ju� mamy funkcje get i nie ma jak tego
		zmieni� z powodu rozbudowania programu / zale�no�ci, a jednocze�nie 
		zale�y nam na otrzymaniu wszystkiego ze strumienia.
		
	*/
	char c;
	
	c = cin.get(); // get zabierze 1-wszy znak, a my chcemy go od�o�y� na miejsce.
	cin.putback(c); // 1-wszy znak od�o�ony na strumie�.
	
	if (c > '0' && c < '9')
	{
		int liczba;
		cin >> liczba;
		
		cout << "Zostala wpisana liczba: " << liczba << endl;
	}
	else
	{
		string txt;
		
		cin >> txt;
		
		cout << "Wpisano tekst o wartosci: " << txt << endl;
	}
	

	system("PAUSE");
	return 0;
}
