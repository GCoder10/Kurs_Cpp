#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void lotto(int, int); // Procedura, void, nie zwraca niczego.
void lotto_zawsze_inne_liczby(int total_balls, int balls_to_allot);
int * lotto_zawsze_inne_liczby_zwr_wsk_na_balls(int total_balls, int balls_to_allot); // Funkcja zwracaj�ca
// wska�nik, typ int, na tablic� balls

const int ILOSC_KULEK = 6;


int main()
{
	// Okre�lamy ziarno.
	srand(1000);
	srand(RAND_MAX);
	srand(time(NULL));	
	/*
		pseudolosowe - liczba i tak nie jest losowa, okre�lone s� regu�y losowo�ci
		Regu�a losowania liczby jest okre�lona przy pomocy "ziarna", czyli 
		dodatkowych zmiennych do oblicze� we wzorze licz�cym liczbe losow� w 
		predefiniowanej funkcji rand().
	*/
	// rand() % 3; - liczby od 0 do 2
	// rand() % 3 + 1; - liczby od 1 do 3
	// rand() % 3 + 10; - liczby od 10 do 12
	// rand() % 49 + 1; - liczby od 1 do 49
	
	int liczba = rand() % 49 + 1;
	cout << "Liczba pseudolosowa: " << endl;
	cout << liczba << endl;
	cout << "RAND_MAX: " << endl;
	cout << RAND_MAX << endl;
	
	
	// Wszystkie kule: 49, do losowania: 6
	// 1 razem, 3 do losowania, return;
	lotto(49, 6);
	
	
	cout << "Zawsze inne liczby: " << endl;
	lotto_zawsze_inne_liczby(6, 6);
	
	int ile;
	// * balls wska�nik przechowuj�cy adres uzyskany z funkcji zwracaj�cej adres do 
	// tablicy balls znajduj�cej si� wewn�trz samej funkcji.
	cout << "Ile wylosowac liczb? (z " << ILOSC_KULEK << " liczb): "<< endl;
	cin >> ile;
	int * balls = lotto_zawsze_inne_liczby_zwr_wsk_na_balls(ILOSC_KULEK, ile);
	cout << "Zawsze inne liczby zwr wsk na balls: " << endl;
	
	// Za du�o do wylosowania za ma�o dost�pnych
	if (balls != NULL)
	{
		for (int i = 0; i < ile; i++)
			cout << "ball [" << i + 1 << "] = " << balls[i] << endl;
		
		// Wska�nik w funkcji g��wnej main() - balls dalej wskazuje na miejsce utworzone przez wska�nik
		// w funkcji lotto_zawsze_inne_liczby_zwr_wsk_na_balls, wi�c teraz mo�na wyczy�ci� t� pami��.
		delete [] balls;
	}
	else
		cout << "Podales wieksza ilosc kulek niz jest dozwolona, czyli: " << ILOSC_KULEK << endl;
	
	
	
	system("pause");
	return 0;
}

void lotto(int total_balls, int balls_to_allot)
{
	if (total_balls < balls_to_allot)
		return;
		
	srand(time(NULL));
	
	// Wska�nik wskazuj�cy na pocz�tek new int, zarezerwowanego adresu do przechowywania danych 
	// typu int poza naszym programem. *balls = tablica, nazwa tablicy = wska�nik, wskazuje
	// na pocz�tek tablicy, jej 1-wszy element, reszta element�w znajduje si� obok siebie.
	// lotto(49, 6); - 6 zarezerwowanych miejsc typu int obok siebie przez new int (4 bajty).
	// Wraz z zako�czeniem wykonywania si� procedury, * balls przestaje istnie�, wi�c ju� nie mamy
	// �adnego odwo�ania do zarezerwowanych miejsc w pami�ci przechowuj�cych warto�ci pseudolosowe.
	// Pami�� dalej jest zarezerwowana pomimo utracenia *balls po ko�cu wykonywania si� procedury.
	// Potrzebne 	delete [] balls;
	int * balls = new int[balls_to_allot];
	
	
	for (int i = 0; i < balls_to_allot; i++)
	{
		// Losowanie od 1 do total_balls, czyli od 1 do 49
		// Tyle, ile do wylosowania przysz�o (6), tyle razy p�tla si� wykona z losowaniem
		// i umie�ci w tablicy balls wylosowane liczby sztuk 6.
		balls[i] = rand() % total_balls + 1;
		
		cout << "ball [" << i + 1 << "] = " << balls[i] << endl;
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	delete [] balls;
}

void lotto_zawsze_inne_liczby(int total_balls, int balls_to_allot)
{
	if (total_balls < balls_to_allot)
		return;
		
	srand(time(NULL));
	
	// Wska�nik wskazuj�cy na pocz�tek new int, zarezerwowanego adresu do przechowywania danych 
	// typu int poza naszym programem. *balls = tablica, nazwa tablicy = wska�nik, wskazuje
	// na pocz�tek tablicy, jej 1-wszy element, reszta element�w znajduje si� obok siebie.
	// lotto(49, 6); - 6 zarezerwowanych miejsc typu int obok siebie przez new int (4 bajty).
	// Wraz z zako�czeniem wykonywania si� procedury, * balls przestaje istnie�, wi�c ju� nie mamy
	// �adnego odwo�ania do zarezerwowanych miejsc w pami�ci przechowuj�cych warto�ci pseudolosowe.
	// Pami�� dalej jest zarezerwowana pomimo utracenia *balls po ko�cu wykonywania si� procedury.
	// Potrzebne 	delete [] balls;
	int * balls = new int[balls_to_allot];
	
	
	for (int i = 0; i < balls_to_allot; i++)
	{
		// Losowanie od 1 do total_balls, czyli od 1 do 49
		// Tyle, ile do wylosowania przysz�o (6), tyle razy p�tla si� wykona z losowaniem
		// i umie�ci w tablicy balls wylosowane liczby sztuk 6.
		balls[i] = rand() % total_balls + 1;
		
		// Sprawdzanie, czy liczba, kt�ra wpad�a do tablicy balls nie jest taka sama, co ju�
		// kt�ra� tam siedz�ca.
		for (int j = 0; j < i + 1; j++)
		{
			// Ju� jest taka sama liczba ma miejscu
			// i-- p�tla g��wna cofnie si� i nadpisze to, co ju� jest w tablicy balls
			// break; - brak potrzeby por�wnywania dalej
			if (balls[i] == balls[j] && i != j)
			{
				i--;
				break;
			} else if (j == i)
				cout << "ball [" << i + 1 << "] = " << balls[i] << endl;
		}
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	delete [] balls;
}

int * lotto_zawsze_inne_liczby_zwr_wsk_na_balls(int total_balls, int balls_to_allot)
{
	if (total_balls < balls_to_allot)
		return NULL;
		
	srand(time(NULL));
	
	// Wska�nik wskazuj�cy na pocz�tek new int, zarezerwowanego adresu do przechowywania danych 
	// typu int poza naszym programem. *balls = tablica, nazwa tablicy = wska�nik, wskazuje
	// na pocz�tek tablicy, jej 1-wszy element, reszta element�w znajduje si� obok siebie.
	// lotto(49, 6); - 6 zarezerwowanych miejsc typu int obok siebie przez new int (4 bajty).
	// Wraz z zako�czeniem wykonywania si� funkcji, * balls przestaje istnie�, wi�c ju� nie mamy
	// �adnego odwo�ania do zarezerwowanych miejsc w pami�ci przechowuj�cych warto�ci pseudolosowe.
	// Pami�� dalej jest zarezerwowana pomimo utracenia *balls po ko�cu wykonywania si� funkcji.
	// Potrzebne 	delete [] balls;
	int * balls = new int[balls_to_allot];
	
	
	for (int i = 0; i < balls_to_allot; i++)
	{
		// Losowanie od 1 do total_balls, czyli od 1 do 49
		// Tyle, ile do wylosowania przysz�o (6), tyle razy p�tla si� wykona z losowaniem
		// i umie�ci w tablicy balls wylosowane liczby sztuk 6.
		balls[i] = rand() % total_balls + 1;
		
		// Sprawdzanie, czy liczba, kt�ra wpad�a do tablicy balls nie jest taka sama, co ju�
		// kt�ra� tam siedz�ca.
		for (int j = 0; j < i + 1; j++)
		{
			// Ju� jest taka sama liczba ma miejscu
			// i-- p�tla g��wna cofnie si� i nadpisze to, co ju� jest w tablicy balls
			// break; - brak potrzeby por�wnywania dalej
			if (balls[i] == balls[j] && i != j)
			{
				i--;
				break;
			} 
		}
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	// delete [] balls;
	
	return balls;
}
