#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string id;  
    int score;  
};
void max(Student* students) {
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
    }
    cout << "�ɼ���ߵ�ѧ��ѧ����" << students[maxIndex].id << endl;
}

int main() {
    Student students[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "��" << (i + 1) << "��ѧ����ѧ��Ϊ��";
        cin >> students[i].id;
        cout << "��ѧ���ĳɼ�Ϊ��";
        cin >> students[i].score;
    }

    max(students);
    return 0;
}