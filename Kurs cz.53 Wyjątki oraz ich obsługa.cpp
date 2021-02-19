#include <iostream>

using namespace std;

class ExceptionDzieleniePrzezZero
{
	public:
		void getErrorMessage() { cout << "[ExceptionDzieleniePrzezZero] Nie dziel przez zero" << endl; };
};

double dzielenie(double a, double b) throw (ExceptionDzieleniePrzezZero)// Funkcja, deklaracja, zwraca typ double, inline - szybciej si� kompiluje (je�eli jest inline).
{
	if (b == 0)
		throw ExceptionDzieleniePrzezZero();
	
	
	return a/b;
}

int main()
{
	
	/*
		Mo�e by� wiele powod�w do b��d�w, z�e dzia�anie, b��dna alokacja pami�ci lub 
		b��dne jej zwolnienie.
		
	*/
	double a = 10;
	// throw - wyrzucanie wyj�tku.
	// potem taki wyj�tek trzeba "z�apa�".
	// catch - �ap (taki wyrzucony wcze�niej wyj�tek).
	// Ustalamy, jakiego typu wyj�tek chcemy z�apa�.
	// Dalsze instrukcje po wyrzuceniu b��du nie b�d� realizowane.
	
	
	
	/*
		double a - wyj�tek nie zostanie obs�u�ony, program si� od razu zamknie.
		catch(...) - obs�uga wyj�tk�w typu wszelakiego.
	*/
	try
	{
		a*=5;
		
		if (a == 50) 
			throw a;
			
		cout << "Dalsze instrukcje" << endl;
	} 
	catch(int wyjatek)
	{
		cout << "Powstal wyjatek, bo a = " << a << endl;
	}
	catch(...)
	{
		cout << "Wyjatki typu wszelakiego" << endl;
	}


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
	/*
		Funkcja wyrzuca wyj�tek typu double (throw), tutaj jest on �apany.
		
		Zamiast w funkcji robi� throw robi to si� przy pomocy innej klasy np.
		ExceptionDzieleniePrzezZero
		Exception - wyj�tek.
		
		
		Wtedy w funkcji:
		throw ExceptionDzieleniePrzezZero();
		Z (), wywo�anie konstruktora, �eby w og�le wywo�a� ten obiekt.
		
		B��d z funkcji zosta� wyrzucony (double), typu ExceptionDzieleniePrzezZero, wi�c
		kompilator szuka w catch odpowiedniej reakcji na b��d takiego rodzaju.
	*/	
	double wynik;
	try
	{
		wynik = dzielenie(5,0);
		cout << wynik << endl;
		cout << "Dalsze instrukcje" << endl;
	} 
	catch(double wyjatek)
	{
		cout << "Powstal wyjatek, bo wyjatek = " << wyjatek << endl;
	}
	catch(ExceptionDzieleniePrzezZero wyjatek)
	{
		wyjatek.getErrorMessage();
	}
	catch(...)
	{
		cout << "Wyjatki typu wszelakiego" << endl;
	}
	
	/*
		Je�eli jest bardzo du�o instrukcji w funkcji, kt�ra zwraca wyj�tki, warto pisa�
		podczas jej deklaracji, �e takowe b�d� zwracane,
		double dzielenie(double a, double b) throw (ExceptionDzieleniePrzezZero)
	*/
	
	
	cout << "Dalej wszystko jest wykonywane. Pozostale instrukcje." << endl;
	system("PAUSE");
	return 0;
}
