#include <iostream>

using namespace std;

int zm = 404;
int zmiennaGlobalna = zm; // Na ca�ym terenie programu.
int zm2;
int zmiennaGlobalna2 = zm2; // Na ca�ym terenie programu.
// Po rezerwacji miejsca w pami�ci zmienne globalne s� automatycznie zerowane.
// Je�eli nie podamy od razu warto�ci.
main()
{
	int zmiennaLokalna; // Nale�y tylko do main()
	// nie zeruje warto�ci
	int a = 10;
	
	if (a == 10)
	{
		int wynik = a * 10;
		cout << "Wynik w if'ie: " << wynik << endl; 
	}
	// int wynik mo�e zosta� wypisany tylko w "swoim �rodowisku"
	// lub g��biej ale nie na zewn�trz
	// cout << wynik << endl; 
	
	
	
	
	cout << "Zmienna globalna 404: " << zmiennaGlobalna << endl;
	cout << "Zmienna globalna2 zm2: " << zmiennaGlobalna2 << endl;
	cout << "Zmienna lokalna: " << zmiennaLokalna << endl;
	
	
	// Deklaracja int i = 0 w p�tli for = nie mo�na wypisa�, ile liczb dodano ni�ej.
	// P�tla niesko�czona
	// for(;;)
	// {
	//
	// }
	// Zmienne s� dost�pne od tego miejsca, gdzie si� je zdefiniowa�o.
	// Poniewa� kompilator czyta kod od g�ry do do�u.
	int liczba, wynik = 0;
	// cout << i;
	int i = 0;
	for (i; i < 3; i++)
	{
		cout << "Podaj liczbe numer " << i+1 << ": " << endl;
		cin >> liczba;
		
		wynik += liczba;
	}
	cout << "Wynik dodawania: " << wynik << endl;
	cout << "Dodano: " << i << " liczb"<<endl;
	
	
	
	system("pause");
}
