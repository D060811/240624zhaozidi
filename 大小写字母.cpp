#include <iostream>
using namespace std;
int main()
{
	char c;
	cin >> c;
	if ('a' <= c && 'z' >= c)
	{
		char t = c - ('a' - 'A');
		cout << t << endl;
	}
	else {
		cout << c + 1 << endl;
	}
	return 0;
}

