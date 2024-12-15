#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int i = 0;
    int s1Len = 0;
    int s2Len = 0;
    while (s1[s1Len] != '\0') {
        s1Len++;
    }
    while (s2[s2Len] != '\0') {
        s2Len++;
    }

    while (i <= s2Len - s1Len) {
        int j = 0;
        while (j < s1Len) {
            if (s2[i + j] != s1[j]) {
                break;
            }
            j++;
        }
        if (j == s1Len) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    const int MAX_SIZE = 100;
    char s1[MAX_SIZE];
    char s2[MAX_SIZE];

    cout << "Enter the first string: ";
    cin.getline(s1, MAX_SIZE);

    cout << "Enter the second string: ";
    cin.getline(s2, MAX_SIZE);

    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << s1 << " 是 " << s2 << " 的子串，下标为: " << result << endl;
    }
    else {
        cout << s1 << " 不是 " << s2 << " 的子串" << endl;
    }

    return 0;
}