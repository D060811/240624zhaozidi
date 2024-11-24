#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "输入两个整数";
	cin >> a >> b;
	c = a * b;
	if (b > a)
	{
		d = a;
		a = b;
		b = d;
	}
	while (a % b)
	{
		d = b;
		b = b % a;
		a = d;
	}c = c / b;
	cout << "最大公约数为" << b << endl;
	cout << "最小公倍数为" << c << endl;

}
