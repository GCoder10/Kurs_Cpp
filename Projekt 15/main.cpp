#include <iostream>
#include "szablonek.h"

using namespace std;

int main(int argc, char *argv[])
{
	/*
		Kurs cz.53 Szablony klas
			
		DEV C++ niestety nie po��czy zmiennych tak �adnie jak zwykle w przypadku tworzenia
		szablonu klasy.
		Dlatego te� trzeba przenie�� iostream i namespace std bezpo�rednio do pliku 
		headers z klasami.
		Metody nale��ce do klasy, z kt�rej chcemy zrobi� szablon tak�e musz� sta� si� 
		szablonem i istnie� od razu pod ni�
		
		
		Podczas korzystania z szablonu klasy podczas deklaracji obiektu/klasy trzeba
		od razu poda� typ parametru.
		
		
		Klasy w zale�no�ci od typu paramatr�w zajmuj� wi�cej/mniej miejsca w pami�ci.
		Klasy powstaj� w czasie kompilacji (szablony).
		
		
		
		Robienie szablonu z drugiej klasy Punkt2D analogicznie.
		Podmieniamy int na T, parametry z zewn�trz, gdy b�dzie tworzony szablon.
		Z metodami nale��cymi do tej klasy tak samo jak w przypadku poprzedniej klasy.
		W tych metodach tak�e ustawiamy przyjmowanie typu parametru z zewn�trz, podczas
		tworzenia si� szablonu.
		
		
		W przypadku dziedziczenia musimy okre�li� te� typ parametru przy pisaniu klasy, z
		kt�rej dziedziczymy.
		
		
		
		Specjalizowanie szablon�w klas:
			- nie chcemy, �eby zosta�y podane parametry okre�lonego typu.
			
			
		Na samym dole klasy i jej metod podajemy:
		template<>
		class Punkt<char>
		W klasie Punkt nie chcemy parametr�w typu char np.
		Czyli teraz tworzymy drug� klas�, ta sama nazwa poprzedniej, ale nowa, dla
		konkretnego typu szablonu.
		
		Zastosowano podej�cie inline:
		Punkt() { cout << "Nie wolno tworzyc z tego szablonu typu char" << endl; }	
		Kompilator operuje takim podej�ciem szybciej od rozpisania tego na wi�cej linijek.
		
		Teraz kolejny wyj�tek, ale wzgl�dem otrzymywania parametru typu wska�nik:
		template<>
		class Punkt<char>
		{
			public:
				Punkt(char a = 0) { cout << "Nie wolno tworzyc z tego szablonu typu char" << endl; }	
		};
		
		
		Ale wzgl�dem konkretnej metody:
		template<>
		double Punkt<double>::getX()
		{
			cout << "getX(), do szablonu wyslano typ double" << endl;
			return this->x;
		}
		Do szablonu klasy Punkt wysy�amy dane typu wszelakiego, ale mo�emy oddzielnie reagowa�
		na dane okre�lonego typu.
		
		
		
		Mo�na te� tworzy� swojego rodzaju wyj�tki, kt�rych szablon nie przyjmie, np. wska�nik�w:
		
		template<typename TYP>
		class Punkt<TYP*>
		{
			public:
				Punkt() { cout << "Przekazywanie wskaznikow do tego szablonu jest zabronione." << endl; };
		};

	*/    
	typedef Punkt<int> PunktInt; // Zdefiniowany w�asny typ
	typedef Punkt<double> PunktDouble;
	
	
	
    Punkt<int> a(5.5);
    cout << a.getX() << endl;
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;
        cout << endl;
         cout << endl;
         
         
    Punkt<double> a2(5.5);
    cout << a2.getX() << endl;	
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;
        cout << endl;
         cout << endl;  
         
         
    PunktInt a3(5.5);
    cout << a3.getX() << endl;
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;
        cout << endl;
         cout << endl; 
	
	   
    PunktDouble a4(5.5);
    cout << a4.getX() << endl; 
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;
        cout << endl;
         cout << endl;    
   
   
   	Punkt2D<int> b(5.4, 6);
   	cout << b.getX() << endl;
	cout << b.getY() << endl;
   	Punkt2D<double> b2(5.4, 6);
   	cout << b2.getX() << endl;
	cout << b2.getY() << endl;
	
	
	
	Punkt<char> punktChar(49);
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
         
	
	Punkt<int*> zmienna;
	Punkt<float*> zmienna2;
	
	
    
    system("pause");
    return 0;
}
