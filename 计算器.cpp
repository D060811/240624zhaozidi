#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char ysf;
	cin >> a >> ysf >> b;
	switch(ysf) {
	case'+':cout << a + b; break;
	case'-':cout << a - b; break;
	case'*':cout << a * b; break;
	case'/':if (b == 0)cout << "��ĸ����Ϊ0";
		   else cout << a / b;
		break;

	}
	return 0;
}