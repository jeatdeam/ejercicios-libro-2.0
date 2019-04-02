#include<iostream>
using namespace std;
int main() {
	int r;
	float a, diametro,area;
	cout << "escriba el valor del radio";cin >> r;
	a = 3.14159;
	diametro = a * r;
	area = a * (r*r);
	cout << "el diamtro es :" << diametro;
	cout<<"el area es : "<<area;

		system("pause");
		return 0;
}
