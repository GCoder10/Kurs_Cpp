#include <iostream>

using namespace std;

int main()
{
	/*
		Algorytm przeszukiwanie liniowe - poszukiwanie warto�ci min i max.
		
	*/
	int min, max, tab[5] = { 4, -3, 30, 40, 20};
	
	
	min = tab[0];
	max = tab[0];
	
	for (int i = 1; i < 5; i++)
	{
		if(tab[i] > max)
			max = tab[i];
			
		if(tab[i] < min)
			min = tab[i];
	}
	
	
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;



	getchar();
	system("PAUSE");
	return 0;
}
