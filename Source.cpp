#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double z1; // результат 1 виразу
	double z2; // результат 2 виразу
	double a{}; // альфа
	double b{}; // бета 
	cout << "a = "; cin >> b;
	cout << "b = "; cin >> b;
	z1 = (cos(a) - cos(b)) * (cos(a) - cos(b)) - (sin(a) - sin(b)) * (sin(a) - sin(b));
	z2 = -4 * sin((a - b) / 2)*sin((a - b)/2) * cos(a + b);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}