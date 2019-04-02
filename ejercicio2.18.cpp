#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {

	int a, b;
	cout << "ingrese a: ";cin >> a;
	cout << "ingrese b: ";cin >> b;

	if (a == b) {

		cout << "estos numeros son iguales";

	}
	else if (a > b) {

		cout << a << "es mas grande";

	}
	else {

		cout << b << "es mas grande";

	}
	system("pause");
	return 0;


}