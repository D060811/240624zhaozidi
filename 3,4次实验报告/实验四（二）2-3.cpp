#include <iostream>
using namespace std;
int* s(int* list, int listsize) {
	for (int i = 0; i < listsize - 1; i++) {
		for (int j = 0; j < listsize - 1 - i; j++) {
			if (list[j] > list[j + 1]) {
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
	return list;
}
int main()
{
	int size;
	cout << "������Ԫ�ظ�����";
	cin >> size;
	int* list = new int[size];
	for (int i = 0; i < size; i++) {
		int temp;
		cout << "�������" << i + 1 << "��Ԫ�أ�";
		cin>> temp;
		list[i] = temp;
	}
	s(list, size);
	cout << "�����" << endl;
	for (int i = 0; i < size; i++) {
		cout << list[i] << " ";
	}
	delete[] list;
}