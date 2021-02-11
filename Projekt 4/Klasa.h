class Dane_czlowieka_class //Klasa
{
	protected: // chroniony, oznacza, �e wszystko jest tak jak pod etykiet� private, ale dodatkowo jest dost�pne w innych klasach, kt�re dziedzicz� t� klas�.
	
	// Zmienne w klasie s� prywatne. Do u�ycia tylko wewn�trz tej klasy.
	private: // automatycznie w klasie jest ta etykieta.
	// Powinni�my chcie� w klasie tworzy� zmienne jako prywatne, �eby nikt/nic z zewn�trz przypadkiem/specjalnie nie podmienia� warto�ci zmiennych.	
	unsigned short wiek_class;
	
	
	public:
		Dane_czlowieka_class(); // Zawsze powinien by� jaki� konstruktor domy�lny wrazie czego
		Dane_czlowieka_class(int); // Konstruktor, w Klasa.cpp.
		~Dane_czlowieka_class(); // Destruktor - negujemy konstruktor.
	unsigned short getWiek() { return wiek_class; }; // Prototyp funkcji
	unsigned short getWiekND(); // Prototyp funkcji, definicja oddzielnie
	// Procedura przyjmuj�ca z zewn�trz (np. z innej klasy), jaki wiek wewn�trz tej klasy ustawi�.
	// a dok�adniej, teraz nazywa si� to metoda.
	// Mo�emy robi� "zabezpieczenia" na to, co mog� przyj�� zmienne wewn�trz tej klasy.
	void setWiek(unsigned short age) { wiek_class = age; }; 
	void setWiekND(unsigned short); // Prototyp - deklaracja
	// Funkcje inline wykonuj� si� du�o szybciej.

};

// Konstruktor - tworzy klase
// 
