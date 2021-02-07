#include <iostream>

using namespace std;


int main()
{
	// 4 bajty dla int
	// * ko�o & oznacza wy�uskanie zawarto�ci z danego adresu.
	int zm = 109;
	int a = 5;
	cout << "Adres zm: "<< &zm << endl;
	cout << "Wyluskanie zm z adresu (*&): " << *&zm << endl;


	// Zmienna wska�nikowa - przechowuje jedynie adresy do innych zmiennych.
	// *wsk - pe�ni role informacyjn�, informuje kompilator.
	// Mo�e wskazywa� na zmienne, kt�re s� typu int. (w tym przypadku)
	// wska�nik - zwyk�a zmienna, "pojemnik" do przechowywania adresu.
	int *wsk;
	// Wska�nik nie mog�cy potem zmienia� adresu do wskazywania.
	// Jedynie co mo�emy zmienia�, to warto�� wskazywanego adresu.
	int * const wsk_staly = &a;
	// wsk_staly = &a; b��d.
	wsk = &zm;
	cout << "Wyluskanie ze wskaznika: " << *wsk << endl;
	
	// Ten zapis: *&zm  to jest ten sam zapis, co: *wsk
	
	zm = 5;
	cout << "Wyluskanie ze wskaznika po zmianie zm na 5: " << *wsk << endl;
	cout << "Wartosc zm: "<< zm << endl;
	
	// z * poniewa� zmieniamy warto�� pod zm, czyli trzeba wy�uska� warto�� wska�nika.
	// samo wsk = 20 b��d, wtedy zamiast 20 trzeba wskaza� nowy adres do wskazywania przez wska�nik.
	*wsk = 20;
	cout << "Wyluskanie ze wskaznika po zmianie *wsk na 20: " << *wsk << endl;
	cout << "Wartosc zm: "<< zm << endl;
	
	
	// Podmieniona warto��, na kt�r� wskazuje wska�nik, podmieniony adres.
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	wsk = &a;
	cout << "Wyluskanie ze wskaznika po zmianie wsk = &a: " << *wsk << endl;
	cout << "Wartosc a: "<< a << endl;
	cout << "Wartosc zm: "<< zm << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	a = 15;
	cout << "Wyluskanie ze wskaznika po zmianie wsk = &a: " << *wsk << endl;
	cout << "Wartosc a: "<< a << endl;
	cout << "Wartosc zm: "<< zm << endl;		
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	*wsk = 1501;
	cout << "Wyluskanie ze wskaznika po zmianie wsk = &a (*wsk = 1501): " << *wsk << endl;
	cout << "Wartosc a: "<< a << endl;
	cout << "Wartosc zm: "<< zm << endl;
	// Wska�nik i referencja to dwie r�ne rzeczy.





	// Wska�nik sta�y
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	*wsk_staly = 2405;	
	cout << "Wyluskanie ze wskaznika po zmianie *wsk_staly = 2405: " << *wsk_staly << endl;
	cout << "Wartosc a: "<< a << endl;
	// Wska�nik sta�y, jak wspomniane wy�ej, mo�na zmienia� tylko warto�� znajduj�c� si� pod
	// wskazanym adresem, ale samego adresu do wskazywania ju� nie.
	// Takiej zmiany te� mo�na zabroni�:
	const int * wsk_na_stala_wartosc;
	wsk_na_stala_wartosc = &a;
	// *wsk_na_stala_wartosc = 2000; b��d
	// Tutaj mo�na zmienia� wskazywany adres ale nie mo�na modyfikowa� tego, co pod nim si� znajduje.
	
	
	
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// Zabroniona zmiana i wskazywanego adresu i samej warto�ci znajduj�cej si� pod wskazywanym
	// adresem.
	// Musimy wskazywa� na taki sam typ zmiennej
	int b = 200;
	const int * const wsk_na_stala_wartosc_adres = &b;
	// wsk_na_stala_wartosc_adres = &a;// b��d przy zmianie wskazywanego adresu.
	// *wsk_na_stala_wartosc_adres = 505;// b��d przy modyfikacji warto�ci pod wskazywanym adresem.
	
	
	
	
	
	// Mo�emy wska�nik stworzy� na taki spos�b:
	int *wsk_z_inicjalizacja = &b;
	// double *wsk_z_inicjalizacja = &b; - b��d, wskazujemy na typ danych int, wi�c wska�nik te� musi by�
	// typu int.
	
	
	int d = 56;
	// Sam wska�nik te� ma sw�j adres:
	int *zwykly_wsk = &d;
	cout << "Adres wskaznika: " << &zwykly_wsk << endl;
	// Mo�na tak�e stworzy� wska�nik wskazuj�cy na wska�nik dzi�ki temu, �e wska�nik te� ma sw�j adres.
	// oryginalna_dana <--- wsk1 <--- wsk2
	int ** wsk_wskazujacy_na_wsk = &zwykly_wsk;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wartosc wskazywana przez wsk_wskazujacy_na_wsk (adres zwykly_wsk): " << wsk_wskazujacy_na_wsk << endl;
	cout << "Adres zwykly_wsk: " << &zwykly_wsk << endl;
	cout << "Wartosc zwykly_wsk: " << zwykly_wsk << endl;	
	cout << "Wartosc d: " << d << endl;
	cout << "Adres d: " << &d << endl;
	cout << "Wyluskana wartosc ze zwykly_wsk: " << *zwykly_wsk << endl;
	cout << "Wartosc wyluskana ze wsk_wskazujacy_na_wsk (d = 56): " << **wsk_wskazujacy_na_wsk << endl;


	// wsk = na &adres
	// *wsk = mod. zawarto�ci pod wskazywanym adresem
	// &wsk = adres wska�nika
	// *&zm = wy�uskanie z adresu zmiennej jej zawarto�ci
	system("pause");
	return 0;
}
