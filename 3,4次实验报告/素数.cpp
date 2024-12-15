#include<iostream>
using namespace std;
bool is_prime(int num) {
    int ans = 1;
    for (int i = 2; i < num; i++)
        if (num % i == 0) {
            ans = 0;
            break;
        }return ans;}

int main(){
    int n;
    cout << "请输入一个整数：";
    cin >> n;
    if (is_prime(n))
        cout << "是素数" << endl;
    else
        cout << "不是素数" << endl;
    int a = 0;
    int count = 0;
    for (int num = 1; num < 200; num++)
    {
        if (is_prime(num))
        {
            cout << num << "\t";
            count++;
            if (count % 10 == 0)
            {
                cout << endl;
            }
        }
    }

    return 0;
}