//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h" //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    strcpy(name, nm);
    sex = s;
}
int main()
{
    Student stud;                //�������
    Student stud1;
    stud1.set_value(007, "tcg", 'm');
    stud.display();
    stud1.display();//ִ��stud�����display����
    return 0;
}
