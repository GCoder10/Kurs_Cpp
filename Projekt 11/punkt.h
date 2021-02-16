class Punkt // Klasa bazowa, do dziedziczenia, ale te�: klasa rodzic, superklasa
{
	protected:
		int x;
	public:
		Punkt(int = 145); // Automatycznie przypisuje do warto�ci parametru, je�eli nie zostanie wcze�niej
		// zdefiniowana.
		~Punkt();
		int getX(); // Funkcja zwraca int, warto�� x
		void setX(int); // Procedura, nic nie zwraca, tylko ustawia x dla danej instancji/obiektu.
};	

class Punkt2D : public Punkt // Dziedziczenie w spos�b publiczny, klasa dziecko, klasa pochodna, subklasa
{
	// dziedziczenie odbywa si� bez skopiowania konstruktor�w i destruktor�w.
	// Kopiowanie nast�puje wszystkiego, co jest pod public i protected.
	// bez private
	// protected = tak samo jak private, ale maj� dost�p klasy dziedzicz�ce.
	protected:
		int y;
	public:
		Punkt2D(int = 0, int = 0);
		~Punkt2D();
		int getY();
		/*
			setX -> procedura ustawiaj�ca X, przeci��enie 
			polimorfizm
			je�eli setXY, to kompilator wykorzysta setX() z Punkt2D
			Je�eli setX, to te� z Punkt2D.
			Trzeba zasi�gn�� do metody poprzez operator zasi�gu ::
		*/
		void setX(int);
		void setY(int);
		void setXY(int, int);
};

class Punkt3D : public Punkt2D // Dziedziczenie z dw�ch powy�szych klas
{
	
};
/*
	class Punkt2D : public Punkt
	
		wszystko, co znajduje si� w Punkt2D(opr�cz konstruktora i destruktora), w Punkt stanie si�:
			private zmieni si� na niedost�pne.
			protected b�dzie dalej protected.
			public b�dzie dalej public.
			



			
	class Punkt2D : protected Punkt
	
		wszystko, co znajduje si� w Punkt2D(opr�cz konstruktora i destruktora), w Punkt stanie si�:
			private zmieni si� na niedost�pne.
			protected b�dzie dalej protected.
			public b�dzie dalej protected.



			
			
	class Punkt2D : public Punkt
	
		wszystko, co znajduje si� w Punkt2D(opr�cz konstruktora i destruktora), w Punkt stanie si�:
			private zmieni si� na niedost�pne.
			protected b�dzie dalej private.
			public b�dzie dalej private.
*/
