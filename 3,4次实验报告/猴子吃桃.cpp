#include<iostream>
using namespace std;
int f(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return 2 * (f(n - 1) + 1);
	}
}
int main()
{
	int n = 10;
	cout << "��һ��ժ���ӵĸ���Ϊ" << f(n) << endl;
}