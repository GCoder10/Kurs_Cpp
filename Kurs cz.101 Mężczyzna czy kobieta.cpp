#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
		Sprawdzanie, czy podane imie jest p�ci m�skiej czy �e�skiej.
		
		Przed sprawdzeniem p�ci zamiana wszystkich liter na du�e
		for, do d�ugo�ci string, string to te� jest "tablica".
		tablica znak�w, ka�dy znak to char, razem tworz� string, ci�g znak�w.
		
		Je�eli ostatnia litera imienia to jest A => p�e� �e�ska.
	*/
	string imie;
	
	cout << "Podaj imie: " << endl;
	cin >> imie;
	cin.ignore();
	
	for (int i = 0; i < imie.length(); i++)
	{
		imie[i] = toupper(imie[i]);
	}
	
	if (imie[imie.length()-1] == 'A' && imie != "KUBA")
		cout << "Plec zenska" << endl;
	else
		cout << "Plec meska" << endl;


	getchar();
	system("PAUSE");
	return 0;
}
