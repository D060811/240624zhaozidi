#include<iostream>
using namespace std;
int main()
{
	int day_1 = 2;
	int sum = 2;
	int day = 0;
	while (sum < 100) {
		day_1 = 2 * day_1;
		sum += day_1;
		day++;
	};
	double ave = (sum - day_1) * 0.8 / day;
	cout << ave << endl;
}