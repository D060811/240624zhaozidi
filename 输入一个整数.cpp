#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "����һ������";
	cin >> a;
	b = a;
	do
	{
		c = b;
		b = (b + a / b) / 2;
	} while (b - c >= 1e-5 || b - c <= 1e-5);
	cout << b << endl;
}