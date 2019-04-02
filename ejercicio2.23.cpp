#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, e;
	cout << "digite el valor de a: ", cin >> a;
	cout << "digite el valor de b: ", cin >> b;
	cout << "digite el valor de c: ", cin >> c;
	cout << "digite el valor de d: ", cin >> d;
	cout << "digite el valor de e: ", cin >> e;
	if (a < b & a<c & a<d & a<e)
		cout << a<< endl;
	if (b<a&b<c&b<d&b<e)
		cout << b<< endl;
	if (c<a&c<b&c<d&c<e)
		cout << c << endl;
	if (d<a&d<b&d<c&d<e)
		cout << d << endl;
	if (e < a&e < b&e < c&e < d)
		cout << e << endl;
	cout << "el menor" << endl;
	if (a >b & a > c & a > d & a > e)
		cout << a << endl;
	if (b > a&b > c&b > d&b > e)
		cout << b << endl;
	if (c > a&c > b&c > d&c > e)
		cout << c << endl;
	if (d > a&d > b&d > c&d > e)
		cout << d << endl;
	if (e > a&e > b&e > c&e > d)
		cout << e << endl;
	cout << "el mayor"<< endl;






		system("pause");
		return 0;
}