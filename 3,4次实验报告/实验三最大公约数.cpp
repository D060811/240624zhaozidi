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
	cout << "����������������";
	cin >> a >> b;
	cout << "���Լ��Ϊ" << F(a, b) << endl;
	cout << "��С������Ϊ" << a / F(a, b) * b << endl;


}
