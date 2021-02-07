#include <iostream>

using namespace std;


int main()
{
	/*
	   Referencja - refer - odwo�ywa� si� do czego�
	   Reference - odwo�anie si� do czego� (po adresie)
	   Jest najszybsze przy pomocy adresu jakiej� zmiennej
	   Reference - synonim(alias) - przezwisko - wiele sposob�w na dostanie si� do jednej zmiennej.
	*/
	/*
		1. Zmienna referencyjna musi by� od razu zainicjalizowana (odwo�ywa� si� do adresu, by� przezwiskiem dla zmiennej).
		2. Zmienna referencyjna nie mo�e zmienia� skojarze�.
		3. Zmienna referencyjna jest od razu sta�a.
		    int & const zmienna_ref_przezwisko_dla_zwykla_zmienna = zwykla_zmienna;
		     oznacza, �e nie mo�emy zmienia� p�niej referencji (wskazywania na inny adres)
		4. Zmienna referencyjna musi by� takiego samego typu, co zmienna jej przypisywana (na kt�r� jest skojarzona)
	*/
	
	int zwykla_zmienna = 4;
	cout << "Wartosc zwykla_zmienna: " << zwykla_zmienna << ". Adres(&Ampersant): " << &zwykla_zmienna << endl;
	
	
	// Odwo�anie si� do zwykla_zmienna, jej przezwisko.
	// Zmienna referencyjna
	// B�dzie mia�a tak� sam� warto�� i taki sam adres.
	int & zmienna_ref_przezwisko_dla_zwykla_zmienna = zwykla_zmienna;
	cout << "Wartosc przezwisko_dla_zwykla_zmienna: " << zmienna_ref_przezwisko_dla_zwykla_zmienna << ". Adres(&Ampersant): " << &zmienna_ref_przezwisko_dla_zwykla_zmienna << endl;
	
	
	// Taka sama warto�� ale r�ny adres
	int zwykla_zmienna_nie_referencyjna = zwykla_zmienna;
	cout << "Wartosc zwykla_zmienna_nie_referencyjna: " << zwykla_zmienna_nie_referencyjna << ". Adres(&Ampersant): " << &zwykla_zmienna_nie_referencyjna << endl;
	
	
	// Zmienna referencyjna odwo�uje si� do tego samego miejsca w pami�ci, czyli
	// poprzez t� zmienn� mo�emy wp�ywa� na warto�� zwyklej_zmiennej.
	// Zmienia si� warto��, adres pozostaje.
	// zwykla_zmienna_nie_referencyjna nie wp�ynie na zwykla_zmienna, poniewa� wskazuje
	// inne miejsce w pami�ci.
	zwykla_zmienna_nie_referencyjna = 101;
	cout << "Wartosc zwykla_zmienna (po zmianie na 101 przez zwykla_zmienna_nie_referencyjna): " << zwykla_zmienna << ". Adres(&Ampersant): " << &zwykla_zmienna << endl;	
	zmienna_ref_przezwisko_dla_zwykla_zmienna = 404;
	cout << "Wartosc zwykla_zmienna (po zmianie na 404): " << zwykla_zmienna << ". Adres(&Ampersant): " << &zwykla_zmienna << endl;



	// 2. Zmienna referencyjna nie moze zmieniac skojarzen.
	// &zmienna_ref_przezwisko_dla_zwykla_zmienna = a;
	// nie mo�emy nagle zmieni� referencji, skojarzenia.
	// Adres pozostaje, warto�� z a 
	cout << "Zmienna referencyjna nie moze zmieniac skojarzen." << endl;
	int a = 10000;
	zmienna_ref_przezwisko_dla_zwykla_zmienna = a;
	cout << "Wartosc zwykla_zmienna (po zmianie na a): " << zwykla_zmienna << ". Adres(&Ampersant): " << &zwykla_zmienna << endl;



	// 3. Zmienna referencyjna jest od razu sta�a.
	const int & ref = a;
	// B��d:
	// ref = 40;
	// OK:
	// a = 40; 
	cout << "Wartosc a: "   << a   << ". Adres(&Ampersant): " << &a   << endl;
	cout << "Wartosc ref: " << ref << ". Adres(&Ampersant): " << &ref << endl;
	// const int a = 10000;
	// a = 40 nie zadzia�a.
	a = 40;
	cout << "Wartosc a (po zmianie na 40): "   << a   << ". Adres(&Ampersant): " << &a   << endl;
	cout << "Wartosc ref (po zmianie na 40): " << ref << ". Adres(&Ampersant): " << &ref << endl;	



	// 4. Zmienna referencyjna musi by� takiego samego typu, co zmienna jej przypisywana (na kt�r� jest skojarzona)
	// Wskazujemy na int to musimy wskazywa� jako int a nie np. string, double itp.
	


	system("pause");
	return 0;
}
