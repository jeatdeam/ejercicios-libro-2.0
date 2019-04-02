#include<iostream>

using namespace std;

int main() {
	 
	int a, b, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	cout<<"Escriba un número: ",cin>>a;
	cout<<"Escriba un número: ",cin>>b;

	suma= a + b;
	resta= a - b;
	multiplicacion= a * b;
	division = a / b;
	cout << "\nLa suma es: " << suma << endl;
	cout << "\nLa resta es: " << resta << endl;
	cout << "\nLa multiplicacion es : " << multiplicacion << endl;
	cout << "\nLa division es : " << division << endl;

	system("pause");

	return 0;
}