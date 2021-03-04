#include <iostream>

using namespace std;

int main()
{
	/*
		Zamiana symboli liczb arabskich na liczby rzymskie.
		czyli np. 
		1000 na M
		1 na I
		
		Dzia�anie:
			Podajemy n,np. 100
			Spr. czy n > 0
			
			Spr. w tablicy w, czy liczba podana jest wi�ksza/r�wna 100
			Je�eli tak, to podanie s[r], n zostaje zmniejszone o 100
			poniewa� p�tla for wykonuje si�, dop�ki n > 0, w ten spos�b nast�puje
			zako�czenie wyszukiwania odpowiednika rzymskiego w drugiej tablicy po 
			jego znalezieniu.
			
			char *s[] = wska�nik na wska�nik, nazwa tablicy = wska�nik.
	*/	
	int w[] =   { 1000, 900,  500, 400,  100, 90,   50,  40,   10,  9,    5,   4,    1};
	char *s[] = { "M",  "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	
	
	int n, r;
	
	cout << "Liczba calkowita do zamiany (dodatnia): " << endl;
	cin >> n;
	cin.ignore();
	
	if (n < 0)
		return 0;
		
	cout << "Postac rzymska liczby: " << n << " wyglada nastepujaco: " << endl;
	
	for(r = 0; n > 0;)
	{
		if (n >= w[r])
		{
			cout << s[r];
			n -= w[r];
		} else
		{
			r++;
		}
	}
	
	getchar();
	system("PAUSE");
	return 0;
}
