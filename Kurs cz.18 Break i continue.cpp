#include <iostream>

using namespace std;

main()
{
	// Z ilu cyfr sk�ada si� dana liczba?
	int n = 1234274691, ilCyfr = 1;
	
	cout << 1234 / 10.0 << endl;
	cout << 1234 / 10 << endl;
	
	
	cout << 1234 / 10 << endl;
	cout << 123 / 10 << endl;
	cout << 12 / 10 << endl;
	cout << 1 / 10 << endl;
	
	int tmp = n;
	// dla 1234 wykona si� trzy razy
	while (tmp /= 10) // n = n / 10;
		ilCyfr++;
		
	
	cout << "Liczba: " << n << " sklada sie z " << ilCyfr << " cyfr" << endl;
	
	
	// P�tla w p�tli
	// Tabliczka mno�enia
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |                    |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       10 x 10      |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			// Ustawienie szeroko�ci od jednej liczby do drugiej. Funkcja width()
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |                    |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       20 x 20      |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 20; i++)
	{
		for (int j = 1; j <= 20; j++)
		{
			// Ustawienie szeroko�ci od jednej liczby do drugiej. Funkcja width()
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |                    |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       32 x 32      |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 32; i++)
	{
		for (int j = 1; j <= 32; j++)
		{
			// Ustawienie szeroko�ci od jednej liczby do drugiej. Funkcja width()
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |       continue     |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       10 x 10      |" << endl;
	cout << "             | Bez 1 i 5 wiersza  |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 10; i++)
	{
		if (i == 1)
			continue;
		if (i == 5)
			continue;
		for (int j = 1; j <= 10; j++)
		{
			// Ustawienie szeroko�ci od jednej liczby do drugiej. Funkcja width()
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}
	// Po continue nie zostanie wykonane, ale p�tla leci dalej z kodem, przejdzie z powrotem do i++
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |       break        |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       10 x 10      |" << endl;
	cout << "             |   Bez  5 wiersza   |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		for (int j = 1; j <= 10; j++)
		{
			// Ustawienie szeroko�ci od jednej liczby do drugiej. Funkcja width()
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}	
	// break przerywa ca�kowicie wykonywanie p�tli, continue umo�liwia powr�t do wykonywania z pomini�ciem tylko jednego wskazanego obiegu p�tli.
	

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |       break        |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       10 x 10      |" << endl;
	cout << "             |I-wsze 4 kolumny    |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j == 5)
				break;
				
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |       continue     |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       10 x 10      |" << endl;
	cout << "             |   Bez 5 kolumny    |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j == 5)
				continue;
				
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}	
	
		

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |                    |" << endl;
	cout << "             |    1-no petlowa    |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       10 x 10      |" << endl;
	cout << "             |                    |" << endl;
	cout << "             ----------------------" << endl;	
	for (int i = 1, j = 1; i <= 10; i++)
	{
			cout.width(5);
			cout << i * j;		
			
			if (i == 10)
			{
			   j++;
			   i = 0;	
			   cout << endl;
			}
			
			if (j == 10 + 1)
				break;
	}
	// i czyli wiersz do 10, potem i == 10, czyli reset, nowa linijka = endl.
	// zwi�kszone j++, nast�pny wiersz b�dzie mno�ony przez 2 
	// i tak do 10
	// j == 10 + 1, �eby by�o 10 wierszy
	cout << endl;
	
	
	
	system("pause");
}
