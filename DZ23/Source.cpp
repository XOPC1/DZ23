//������������ ������ ������� �++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <math.h>
using namespace std;

void MAXALL(int &a, int &b, int &c ) {
	int maxi = max(c, max(a, b));
	a = b = c = maxi;
}
int ArrMinus(int  arr[], int l) {
	for (int i = 0; i < l; i++)
		if (arr[i] < 0)
			return arr[i];
	return arr[0];
}
void ShowArr(int arr[], int l) {
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
void DELETEArrEl(int arr1[], int arr2[], int l1, int l2) {
	for (int* p1 = arr1; p1 != arr1 + l1; ++p1)
		for (int* p2 = arr2; p2 != arr2 + l2; ++p2)
			if (*p2 == *p1)
				*p2 = 0;
}
int main() {
	setlocale(LC_ALL, "Russian");
	/*������ 1
�������� �������, ������� ��������� 3 ����������.
��� ������� ����� ��� ������������, ����� ���� ������
�������� ���� ���������� ���������� �� ����� ��
��������, ��� � � ������������.*/
	int a, b, c;
	cout << "������� 3 ����������: ";
	cin >> a >> b >> c;
	MAXALL(a, b, c);
	cout << a << ", " << b << ", " << c << "\n\n";

	/*������ 2
�������� �������, ������� ��������� ������ � ���
�����. ������� ���������� ������ �� ������
������������� ������� �������. ���� ��������������
�������� ���, �� ������� ���������� ������ �� ������
�������.*/
	int arr1[10] = { 1,2,3,-4,0,0,2,3,-1,0 };
	cout << ArrMinus(arr1, 10) << endl;
	/*������ 3
�������� �������, ������� ��������� ��� �������
� �� �����. ������� ������ �������� ��� ��������
������� �������, ������� ����������� � ������. ���
������� ������ ������ ����������� ��������� ����������.*/
	int arr2[10] = { 0,3,5,2,-4,2,0,-2,3,1 };
	cout << "������ ������:\n";
	ShowArr(arr1, 10);
	cout << "������ ������:\n";
	ShowArr(arr2, 10);
	DELETEArrEl(arr1, arr2, 10, 10);
	cout << "������ ������ ����� ��������� ��������:\n";
	cout << "[";
	for (int i = 0; i < 10; i++)
		cout << arr2[i] << ", ";
	cout << "\b\b]\n";
	return 0;
}