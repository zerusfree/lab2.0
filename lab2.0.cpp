// Lab_2.1.cpp
// < Петренко Назар Анатолійович >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 25

#include <iostream>>
#include <cmath>
using namespace std;
int main()
{
	double x;  // вхідний параметр
	double z1; // результат першого виразу 
	double z2; // результат другого виразу

	cout << "x = "; cin >> x;
	z1 = 1 - 1 / 4. * sin(2 * x) * sin(2 * x) + cos(2 * x);
	z2 = cos(x) * cos(x) + cos(x) * cos(x) * cos(x) * cos(x);

	cout << endl;

	cout << "z1 = " << z1 << endl;//special for test 
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
