class Kopiarka
{
	public:
		/*
			Dwa konstruktory, taka sama nazwa, inne parametry, jeden destruktor
			zas�uga polimorfizmu,
			kompilator sam rozpozna, kiedy chcemy u�y� kt�rego konstruktora dzi�ki
			r�nicy w przekazywanych parametrach:
			mo�e to by� jak tutaj ilo�� lub ich typ.
		*/
		Kopiarka(int, int);
		Kopiarka(int, int, int);
		Kopiarka(const Kopiarka &); // Konstruktor kopiuj�cy, przyjmuje referencje do sta�ego typu Kopiarka (klasy).
		~Kopiarka();		
		int x;
		int y;
		int *wsk;
};
