#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
int binarySearch(T list[], int n, T key) {
	int mid, low, hight;
	T midvalue;
	low = 0;
	hight = n - 1;
	while (low <= hight) {
		mid = (low + hight) / 2;
		midvalue = list[mid];
		if (key == midvalue)
			return mid;
		else if (key < midvalue)
			hight = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int main() {
	int i, n;
	int data1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	cout << "�������ѯ������(1~20):";
	cin >> n;
	cout << "����Ϊ" << endl;
	for (int i = 0; i < 20; i++) {
		cout << data1[i] << " ";
	}
	cout << endl;
	i = binarySearch(data1, 20, n);
	if (i < 0)
		cout << "û���ҵ�����" << n << endl;
	else
		cout << n << "�ǵ�" << i + 1 << "������" << endl;
	return 0;
}