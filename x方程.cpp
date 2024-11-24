#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "请输入x=" << endl;
	while (true) {
		cin >> x;
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
			break;
		}
		else if (x >= 1 && x < 5)
		{
			y = 2 / (4 * x) + 1;
			break;
		}
		else if (x > 5 && x <= 10)
		{
			y = x * x;
			break;
		}
		else {
			cout"不在定义域内"
		}
	}cout << "y=" << y << endl;
}
