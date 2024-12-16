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
    cout << "成绩最高的学生学号是" << students[maxIndex].id << endl;
}

int main() {
    Student students[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "第" << (i + 1) << "个学生的学号为：";
        cin >> students[i].id;
        cout << "该学生的成绩为：";
        cin >> students[i].score;
    }

    max(students);
    return 0;
}