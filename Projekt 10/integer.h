class Integer
{
	int liczba;
	public:
		Integer() {}; // Konstruktor domy�lny.
		Integer(int); // Konstruktor konwertuj�cy - zamienia int na typ klasy, Integer.
		operator int(); // zamienia Integer na int. Funkcja operatorowa.
		
		
		int operator+=(Integer); // Funkcja operatorowa, zwraca int, dla operatora +=
		// jako parametr przyjmuje obiekt (czyli dan� instancj�) klasy i dodaje 
		// liczb� do tej, co ju� jest zapisana.
		
		
		int getLiczba(); // Funkcja zwracaj�ca int
};
