#include <iostream>

using namespace std;

int main()
{
	/*
		Dzielenie liczby ca�kowitej w taki spos�b, �e na ko�cu mo�na dowiedzie� si�, ile ma cyfr.
		Dop�ki liczba wprowadzona przez u�ytkownika daje si� dzieli� przez 10, dop�ty jest 
		postinkrementowana warto�� k.
	*/
	int n, k;
	
	cout << "Podaj liczbe calkowita: " << endl;
	cin >> n;
	cin.ignore();
	
	for(k = 1; n /= 10; k++);
		
	cout << "Liczba cyfr: " << k << endl;


	getchar();
	system("PAUSE");
	return 0;
}
