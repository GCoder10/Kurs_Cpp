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
	
	
	cout << "Zmienna globalna 404: " << zmiennaGlobalna << endl;
	cout << "Zmienna globalna2 zm2: " << zmiennaGlobalna2 << endl;
	cout << "Zmienna lokalna: " << zmiennaLokalna << endl;
	system("pause");
}
