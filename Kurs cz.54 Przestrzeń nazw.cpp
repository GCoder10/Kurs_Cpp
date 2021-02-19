#include <iostream>
#include <string>

using namespace std;

int a = 5;

namespace A
{

	int zm = 20;

}
namespace B
{
	
	int zm = 50;
	
}

using namespace A;

namespace mojaPrzestrzen
{
	using namespace std;
	
	class MojaNowaLinia
	{
		
			string zn;
		public:
			MojaNowaLinia(string zn = "\n\n\n\n") { this->zn = zn; };
			string toString()
			{
				// string t[1];
				// t[0] = zn;
				return zn;
			}
	};
	
	ostream & operator<<(ostream & out, MojaNowaLinia & obj)
	{
		return out << obj.toString();
	}
	
	MojaNowaLinia endl2;
	
}

using namespace mojaPrzestrzen;

int main()
{
	/*
		Przestrze� globalna (ponad funkcj� main)
		Przestrze� lokalna (w danej funkcji, metodzie, itp.).
		
		
		Mo�emy tworzy� w�asne przestrzenie.
		Mo�na u�ywa� tego podej�cia, aby unikn�� konfliktu nazw zmiennych.
		using namespace A;
		�eby korzysta� ze zmiennych okre�lonych w A bez operatora zasi�gu ::
		
		
		Tworzenie w�asnych bibliotek.
		
		
		
		
		Napisanie w�asnego endl
		(jako endl2, normalnie bez using namespace std;)
		namespace mojaPrzestrzen
		Zamiast pisa� np. get.cos.cos() to od razu kierowanie na wyj�cie konkret�w, bez
		konieczno�ci rozpisywania si� wielokrotnego w kodzie g��wnym dzi�ki
		u�ywaniu w�asnej przestrzeni nazw.	
		publiczny konstruktor:
		MojaNowaLinia(char zn = '\n') { this->zn = zn; };
		nowej linji \n, this->zn = zn, przypisywanie warto�ci zn dla akurat tej instancji/obiektu, gdy
		p�niej zostanie taka wywo�ana.
		
		
		
		Mo�na u�ywa� przestrzeni w przestrzeni.
		
		
		
		
		return ""+zn; zn typ znakowy char, z ""+ zwraca od razu stringa.
		
		
		
		ostream & = stream wyj�ciowy, czyli dok�adnie cout.
		
		
		
		ostream & operator<<(ostream & out, MojaNowaLinia & obj) = przeci��enie operatora << cout,
		poniewa� w #include <iostream> ju� taki operator zosta� zdefiniowany.
		Przekazujemy w ramach jego pracy swoj� klas�, jej obiekt/instancj�
		& - pos�ugiwanie si� adresami, odwo�anie si� dzi�ki temu do konkretnych miejsc w 
		pami�ci.
		
		
		Czyli, gdy na wyj�cie napiszemy endl2, to zostanie wykonane:
		return out << obj.toString();
		zwr�cenie instancji klasy MojaNowaLinia, wywo�anie metody (funkcja zwracaj�ca typ string) toString(), dodanie nowej
		linji.
		Z uwagi, �e to jest teraz nasz endl2, mo�na zrobi�, �e jeden b�dzie dawa� np. 4 nowe linie.
		Ale mo�emy te� przekazywa� sw�j string poprzez utworzenie instancji dla tej klasy.
		Konstruktor w klasie MojaNowaLinia przyjmie wtedy ci�g string.
		
	*/
	int a = 10;
	
	cout << "Wypisze wartosc a z przestrzeni blizszej, a = 10" << endl;
	cout << a << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Operator zasiegu ::, sieganie do wartosci a z przestrzeni wyzej. a = 5." << endl;
	cout << ::a << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Zmienna zm z wlasnej przestrzeni nazw A: " << endl;
	cout << A::zm << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Zmienna zm z wlasnej przestrzeni nazw B: " << endl;
	cout << B::zm << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	
	
	
	cout << "Zmienna zm z wlasnej przestrzeni nazw A (bez operatora zasiegu): " << endl;
	cout << zm << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Wykorzystanie swojego endl2: " << endl2;
	cout << endl2;
	cout << endl2;
	cout << endl2;
	cout << endl2;
	cout << "Wlasne endl2" << endl2;	
	
	
	
	MojaNowaLinia zmienna("zmienna = obiekt/instancja klasy MojaNowaLinia");
	cout << "Przekazanie string do klasy MojaNowaLinia poprzez utworzenie instancji/obiektu zmienna: " << endl;
	cout << zmienna << endl2;
	
	
	system("PAUSE");
	return 0;
}
