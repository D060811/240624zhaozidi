#include <iostream>
using namespace std;
class Cuboid {
private:
    double length;  
    double width;   
    double height; 
public:
    void input() {
        cout << "�����볤�����ĳ���";
        cin >> length;
        cout << "�����볤�����Ŀ�";
        cin >> width;
        cout << "�����볤�����ĸߣ�";
        cin >> height;
    }
    double volume() {
        return length * width * height;
    }
    void output() {
        cout << "�ó����������Ϊ��" << volume() << endl;
    }
};

int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; i++) {
        cout << "�������" << (i + 1) << "������������Ϣ��" << endl;
        cuboids[i].input();
    }
    for (int i = 0; i < 3; i++) {
        cout << "��" << (i + 1) << "������������������" << endl;
        cuboids[i].output();
    }

    return 0;
}