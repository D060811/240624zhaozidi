//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h" //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
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
    Student stud;                //定义对象
    Student stud1;
    stud1.set_value(007, "tcg", 'm');
    stud.display();
    stud1.display();//执行stud对象的display函数
    return 0;
}
