#pragma once
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int n, const char* nm, char s);
private:
	int num;
	char name[20];
	char sex;
};


