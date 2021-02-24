#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		Vector:
		
		vector<int>wholeNumbers{1,25,-45,200}
		
		[0]    [1]     [2]     [3]
		 1     25      -45     200
		 
		 ^                      ^
		 |                      |
		 |                      |
	wholeNumbers.front();      wholeNumbers.back();
	
	
		Vector jako tablica z bardziej rozbudowanymi mo�liwo�ciami.
		
		Mo�emy nagle doda� element do ju� istniej�cej tablicy (vectora).
		
		W przypadku tablic, gdy ju� sko�czy si� miejsce, nie dodamy nic nowego,
		w vector wystarczy zrobi� push back, aby doda� element na jego koniec.
		
		Mo�emy doda� element w �rodek vectora.
		
		Trzeba zrobi� include vector.
		
		Czyli w trakcie trwania programu dowolnie modyfikujemy vector bez podawania
		jego wielko�ci.
		
		Z vector�w nie powinni�my zawsze korzysta�.
		Jak znamy konkretne rozmiary to lepiej tablice.
		
		
		
		
		
		
		W tym przypadku size vectora = 3 ale capacity = 4
		capacity = pojemno��
		Po dodaniu kolejnego elementu capacity dalej pozostaje = 4
		Generalnie vector na wszelki wypadek rezerwuje troch� wi�cej miejsca ni� aktualnie jest 
		mu potrzebne.
		Gdyby musia� ci�gle po dodawaniu element�w zwalnia� pami��, szuka� nowego miejsca,
		rezerwowa� je na nowo, to troch� mog�oby, przy wi�kszych ilo�ciach danych, d�u�ej
		potrwa�, dlatego rezerwuje od razu wi�cej na zapas.
		W trakcie dodawania element�w capacity z 4 przechodzi od razu na 8.
		Powi�ksza si� dwukrotnie.
		
		
		
		Jako �e vector zachowuje si� jak tablica, mo�emy podmienia� jego warto�ci.
		
		
		
		
		
			wholeNumbers.insert(2, 4500) - wbijanie si� do jakiego� miejsca.
			wholeNumbers.erase(3) - usuwanie z danego miejsca
			ale jako parametry te dwie metody przyjmuj� iterator.	
	*/
	
	vector<int> wholeNumbers; // <> <-- to znaczy, �e to jest szablon klas.
	
	// wholeNumbers.push_back("sdsdd"); // B��d
	wholeNumbers.push_back(20); // Dodanie na koniec vectora
	wholeNumbers.push_back(45);
	
	cout << "wholeNumbers[0]: " << endl;
	cout << wholeNumbers[0]     << endl;
	cout << "wholeNumbers[1]: " << endl;
	cout << wholeNumbers[1]     << endl;
	
	
	wholeNumbers.push_back(200);
	cout << "wholeNumbers[2]: " << endl;
	cout << wholeNumbers[2]     << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "wholeNumbers.back(): " << endl;
	cout << wholeNumbers.back()     << endl;	
	cout << "wholeNumbers.front(): "<< endl;
	cout << wholeNumbers.front()    << endl;	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "wholeNumbers.size(): "    << endl;
	cout << wholeNumbers.size()        << endl;	
	cout << "wholeNumbers.capacity(): "<< endl;
	cout << wholeNumbers.capacity()    << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	
		
	wholeNumbers.push_back(500);
	cout << "[Dodano 1 element na koniec] wholeNumbers.capacity(): "<< endl;
	cout << wholeNumbers.capacity()    << endl;		
	wholeNumbers.push_back(505);
	cout << "[Dodano 1 element na koniec] wholeNumbers.capacity(): "<< endl;
	cout << wholeNumbers.capacity()    << endl;	
	wholeNumbers.push_back(600);
	cout << "[Dodano 1 element na koniec] wholeNumbers.capacity(): "<< endl;
	cout << wholeNumbers.capacity()    << endl;	
	cout << "wholeNumbers.size(): "    << endl;
	cout << wholeNumbers.size()        << endl;		
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	
	
	
	cout << "Modyfikacja 1-wszego elementu: " << endl;
	cout << "wholeNumbers[0] = 999; "         << endl;
	wholeNumbers[0] = 999;
	cout << "wholeNumbers[0]: " << endl;
	cout << wholeNumbers[0]     << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Inny sposob odwolywania sie do elementow:" << endl;
	cout << "wholeNumbers.at(0)   "         << endl;
	cout << wholeNumbers.at(0)     << endl;	
	
	
	
	
	//wholeNumbers.insert(2, 4500)
	//wholeNumbers.erase(3)
	
	system("PAUSE");
	return 0;
}
