#include <iostream>
#include <string>

using namespace std;

// PATTERN = wz�r
const string PATTERN = "����������������";
// Funkcja tworz�ca polskie znaki Windowsowe
// Funkcja zwraca tablic�, czyli wska�nik
int * zle_pl(string);


int polskie_znaki[] = {-91, -92, -104, -105, -85, -115, -120, -99, -94, -66, -67, -28, -29, -87, -88, -122, -113, -32}; //���������������� - alternatywa   
// Tablica przyjmuje pocz�tek, zwr�cony wska�nik z funkcji,
// tablica = wska�nik (jej nazwa przede wszystkim).
int * zle_polskie_znaki = zle_pl(PATTERN);


// Funkcja zwracaj�ca string, dokonuj�ca przekodowania kodowania ASCII polskich
// znak�w do wy�wietlenia. Zwraca typ danych string.
string pl(string);

int main()
{
	cout << "to jest �wierk" << endl;
	cout << "to jest �wierk �����깜�" << endl;
	// Inne kodowanie, � ma inn� warto�� ni� w konsoli, �rodowisku windows.
	// W konsoli � jest pod inn� liczb�.
	// ASCII
	// S� w innych miejscach w tablicy ASCII
	
	char zn;
	cout << "Podaj �: " << endl;
	cin >> zn;
	cout << static_cast<int>('�') << endl;
	cout << "Wypisany znak to: " << static_cast<int>(zn) << endl;
	// � = -91 w konsoli Windows
	// � = -71 podczas kodowania
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << pl("������ Polskie znaki ʌ��ӯ�") << endl;
	
	
	system("pause");
	return 0;
}

int * zle_pl(string pattern)
{
	// Tworzenie tablicy dynamicznej.
	// new int - rezerwacja pami�ci poza programem z jednoczesnym wskazaniem na pocz�tek szeregu.
	// czyli to samo co deklaracja tablicy, nazwa tablicy = adres = wska�nik do 1-wszego jej
	// elementu.
	// Rezerwacja b�dzie nadal nawet po sko�czeniu pracy funkcji, pomimo utracenia wtedy
	// *tab
	// Rzutowanie polskich znak�w na Windowsowe, do dynamicznej tablicy.
	// B�dziemy p�niej w trakcie trwania programu dalej korzysta� z polskich znak�w, wi�c
	// niech rezerwacja z jej warto�ciami dalej b�dzie.
	int *tab = new int[pattern.length()];
	
	for (int i = 0; i < pattern.length(); i++)
		tab[i] = static_cast<int>(pattern[i]);
	
	return tab;
	// return &tab[0]; - pocz�tek = tab
}

string pl(string napis)
{
	// Trafia tutaj napis,
	// sprawdzamy ka�dy znak z tego ci�gu znak�w typu string.
	// Je�eli analizowany znak nale�y do zbioru polskich znak�w okre�lonych przez
	// zmienn� globaln� PATTERN, to 
	for (int i = 0; i < napis.length(); i++)
		for (int j = 0; j < PATTERN.length(); j++)
		{
			// zle_polskie_znaki = wska�nik na zle_pl
			// czyli w, nie, t, nie ale np. � ju� tak
			if (napis[i] == zle_polskie_znaki[j])
			{
				// Zamiana ASCII kodowanego tutaj na Windowsowy do wy�wietlenia.
				// break; i sprawdza nast�pny znak.
				napis[i] = polskie_znaki[j];
				break;
			}
		}
	
	
	return napis;
}
