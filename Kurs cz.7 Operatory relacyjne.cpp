#include <iostream>

using namespace std;
main()
{	
	// Relacyjne, relacje mi�dzy zmiennymi.
	// Jedna jako� odnosi si� do drugiej.
	int a = 5, b = 10;
	
	// nawiasy, czyli najpierw ma wykona�, potem wypisa�
	cout << "Czy a = b (nie): " << "\n";
	cout << (a == b) << endl;
	a = 10;
	cout << "Czy a = b (tak): " << "\n";
	cout << (a == b) << endl;
	cout << "Czy a != b (nie): " << "\n";
	cout << (a != b) << endl;
	a = 5;
	cout << "Czy a != b (tak): " << "\n";
	cout << (a != b) << endl;	
	// podw�jny operator zaprzeczenia
	cout << "Czy a != b (nie, podwojny op. zaprzeczenia): " << "\n";
	cout << !(a != b) << endl;


	// wi�ksze od
	cout << "Czy a > b (nie): " << "\n";
	cout << (a > b) << endl;
	cout << "Czy a < b (tak): " << "\n";
	cout << (a < b) << endl;
	a = 10;
	cout << "Czy a >= b (tak): " << "\n";
	cout << (a >= b) << endl;	
	cout << "Czy a <= b (tak): " << "\n";
	cout << (a <= b) << endl;		
	system("pause");
}
