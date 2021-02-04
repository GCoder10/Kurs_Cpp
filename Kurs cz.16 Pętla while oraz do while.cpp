#include <iostream>

using namespace std;

main()
{
	int i = 0;
	while (i < 10)
	{
		cout << "[i++ w klamrach] i jest rowne: " << i << "\n";
		i++;
	}

	i = 0;
	while (i++ < 10)
		cout << "[POST inkrementacja] i jest rowne: " << i << "\n";

	
	i = 0;
	while (++i < 10)
		cout << "[PRE inkrementacja] i jest rowne: " << i << "\n";


   /*
   
   		i++ w klamrach podnosi i dopiero po wypisaniu i, wi�c pierwsze jest od razu wypisane i = 0
   		i++ w while, sprawdzi i potem podniesie i podniesione i wy�wietli, wi�c i = 1
   		++i czyli pierw podniesie, potem sprawdzi i wypisze, pierw i = 1, bez 10
   		i-- pierw wypisze, potem obni�y warto�� i o jeden, dlatego i = 10 na pocz�tku
   
   */
   
	i = 10;
	while (i != 0)
		cout << "[POST dekrementacja] i jest rowne: " << i-- << "\n";
		
		
	i = 10;
	while (i) // to samo co while (i != 0)
		cout << "[POST dekrementacja (while (i))] i jest rowne: " << i-- << "\n";
	// Wszystko co jest r�ne od 0 jest prawd�, wi�c si� wykonuje
	
		
	i = 10;
	do
	{
		cout << "[POST dekrementacja (do while (i))] i jest rowne: " << i-- << "\n";
	} while (i);



	i = 0;
	do
	{
		cout << "[POST dekrementacja (do while (i))] i jest rowne: " << i-- << "\n";
	} while (i > -10);


	i = 10;
	while (i--)
		cout << "[POST dekrementacja (while (i--))] i jest rowne: " << i << "\n";
		
	
	system("pause");
}
