#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, a = 0;
	while (j < size2 && i < size1)
	{
		if (list1[i] <= list2[j])
		{
			list3[a] = list1[i];
			i++;
			a++;
		}
		else
		{
			list3[a] = list2[j];
			j++;
			a++;
		}

	}
	while (i < size1)
	{
		list3[a] = list1[i];
		a++;
		i++;
	}
	while (j < size2)
	{
		list3[a] = list2[j];
		a++;
		j++;
	}


}

int main()
{

	int size1 = 0, size2 = 0;
	int list1[] = { 0 };
	int list2[] = { 0 };
	int list3[] = { 0 };
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list1:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is";
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << " ";
	}
}