// Lab_2.1.cpp
// < �������� ����� ����������� >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 25

#include <iostream>>
#include <cmath>
using namespace std;
int main()
{
	double x;  // ������� ��������
	double z1; // ��������� ������� ������ 
	double z2; // ��������� ������� ������

	cout << "x = "; cin >> x;//second change 
	z1 = 1 - 1 / 4. * sin(2 * x) * sin(2 * x) + cos(2 * x);//������ �����
	z2 = cos(x) * cos(x) + cos(x) * cos(x) * cos(x) * cos(x);

	cout << endl;

<<<<<<< HEAD
	cout << "z1 = " << z1 << endl;//first change 
=======
	cout << "z1 = " << z1 << endl;//special for test 
>>>>>>> testbranch1
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
