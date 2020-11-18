#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cmath>
using namespace std;

int fn1(int i, int j)
{
	int temp;
	/*if (i < j)
	{
		temp = i;
		i = j;
		j = temp;
	}*/
	while (j != 0) 
	{
		temp = i%j;
		i = j;
		j = temp;
	}
	return i;
}

//int fn1(int i, int j);
int main() 
{
	int i, j, x, y;
	cout << "请输入一个正整数：";
	cin >> i;
	cout << "请输入另一个整数：";
	cin >> j;

	x = fn1(i, j);
	y = i * j / x;
	cout << i << "和" << j << "最大公约数是：" << x << endl;
	cout << i << "和" << j << "最小公倍数是：" << y << endl;
}


