#include <iostream>

using namespace std;
main()
{
	int a;
	char b;
	
    cout << "Podaj liczbe a: " << "\n";
	cin >> a;	
	switch(a)
	{
		case 0:
			cout << "a = 0" << endl;
			break;
		case 25:
			cout << "a = 25" << endl;
			break;
		case 50:
			cout << "a = 50" << endl;
			break;
		default:
			cout << "a nie jest rowne 0, 25, 50" << endl;
	}
	// Instrukcja warunkowa switch przyjmuje tylko liczby ca�kowite.
	// z double a b�dzie b��d
	// string a b�dzie b��d
	// char a b�dzie okej, jest to jeden znak
    cout << "Podaj znak b: " << "\n";
	cin >> b;	
	switch(b)
	{
		case 'a':
			cout << "b = a" << endl;
			break;
		case 'h':
			cout << "b = h" << endl;
			break;
		case '50':
			cout << "b = 50" << endl;
			break;
		default:
			cout << "b nie jest rowne a, h, 50" << endl;
	}	
	// do przypisywania znak�w w typie znakowym char nie musimy u�ywa� tylko znak�w ale ich
	// odpowiedniki ASCII, np. dla k b�dzie to 107
	
	
	
	
	
	system("pause");
}
