#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int numbers[size];
    int distinctCount = 0;

    cout << "������10��������" << endl;

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

    cout << "��ͬ����Ϊ��";
    for (int i = 0; i < distinctCount; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}