#include<iostream>

using namespace std;

int main(){
	int a, b, c, producto, sumapromedio, suma, mayor, menor;

		cout << "introduzca un numero";cin >> a;
		cout << "introduzca un numero";cin >> b;
		cout << "introduzca un numero";cin >> c;

		sumapromedio = (a + b + c) / 3;
		producto = a * b*c;
		suma = a + b + c;
		mayor = a;
		menor = b;

		if (b>a && b>c){
		
			mayor = b;
	
		}
		else if(c>b&&c>a){
		
			mayor = c;
		}
		if(a<b&&a<c){
			menor = a;
		}
		else if (c < b&&c < a) {
			menor = c;
		}
		cout << "la suma es " << suma;
		cout << "la suma promedio es" << sumapromedio;
		cout << "el pruducto es" << producto;




		system("pause");
		return 0;
}