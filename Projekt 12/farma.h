class Zwierze
{
	public: // publiczny modyfikator dost�pu
		virtual void dajGlos();// = 0; // Wirtualna funkcja. = 0 powoduje, �e ca�a klasa Zwierze
		// staje si� klas� abstrakcyjn�.
			
};

class Mucka : public Zwierze
{
	public:
		void dajGlos(); // Polimorfizm, przeci��enie - �eby zasi�gn�� metody z klasy bazowej trzeba 
		// u�y� w klasie pochodnej operatora zasi�gu ::
			
};

class Pies : public Zwierze
{
	public:
		void dajGlos();
			
};

class Kogut : public Zwierze
{
	public:
		void dajGlos();
			
};
