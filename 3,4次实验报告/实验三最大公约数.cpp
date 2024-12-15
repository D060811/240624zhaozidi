#include<iostream>
using namespace std;
int F(int max, int min) {
	while (min != 0) {
		int temp = min;
		min = max % min;
		max = temp;
	}
	return max;
}
int main()
{
	int a, b;
	cout << "请输入两个整数：";
	cin >> a >> b;
	cout << "最大公约数为" << F(a, b) << endl;
	cout << "最小公倍数为" << a / F(a, b) * b << endl;


}
