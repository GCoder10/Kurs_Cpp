#include <iostream>

using namespace std;
// Nazwa zmiennej = etykieta
// liczba = etykieta
main()
{	
    int liczba; // int - liczby ca�kowite, podzbi�r a nie zbi�r liczb ca�kowitych, zakres: -2mld do 2mld
    // liczba = 100; 4 bajty dla int
    // Ka�da zmienna ma adres
    // & = odwo�anie do adresu przechowuj�cego warto�� zmiennej liczba
    // &liczba;
    
    // Inicjalizacja = od razu przypisanie warto�ci
    int liczba2 = 10;
	cout << liczba2 << " " << "\n";
	
	liczba2 = 100;
	cout << liczba2 << " " << "\n";
	// ��czenie wielu rzeczy na wyj�cie = wiele razy <<
	/* Czego ze zmiennymi nie mo�emy zrobi�:
	   1. Poda� na pocz�tku liczby np.
     		int 54liczba;
       2. Bez polskich znak�w:
			int ���;
	   3. Robi� spacji w nazwie zmiennej:
			int as spacja as
	 ale mo�na wtedy: 
			int liczba_pierwsza;
			int liczbaPierwsza;
			int nLiczbaPierwsza; n - number
			
		Zmienne nazwa od ma�ej litery
	*/
	system("pause");
}
