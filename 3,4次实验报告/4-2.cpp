#include <iostream>
using namespace std;

int main() {
    const int numLockers = 100;
    bool lockers[numLockers];
    for (int i = 0; i < numLockers; ++i) {
        lockers[i] = false;
    }
    for (int student = 1; student <= numLockers; ++student) {
        for (int locker = student; locker <= numLockers; locker += student) {
            lockers[locker - 1] = !lockers[locker - 1];
        }
    }
    cout << "���ŵĴ�������Ϊ��";
    for (int i = 0; i < numLockers; ++i) {
        if (lockers[i]) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    return 0;
}
