#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int numbers[size];
    int distinctCount = 0;

    cout << "请输入10个整数：" << endl;

    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;

        bool repeat = false;
        for (int j = 0; j < distinctCount; ++j) {
            if (numbers[j] == num) {
                repeat = true;
                break;
            }
        }

        if (!repeat) {
            numbers[distinctCount] = num;
            ++distinctCount;
        }
    }

    cout << "不同的数为：";
    for (int i = 0; i < distinctCount; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}