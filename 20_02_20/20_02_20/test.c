#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	return 0;
//}
//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	{ 9802, "wang", 19 },
//	{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}

//1. 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//程序的思路：先将总数置为sum（当前一共有的瓶子数）因为最开始给的钱数为money，
//所以购买了money / price 瓶汽水，由于是两个空瓶换一瓶汽水，所以每次换得新汽水
//都为sum / 2，再定义两个变量，一个为 ret（上一次的换的新汽水），一个为temp
//（上一次兑换过程中是否有单独剩余的空瓶）。
//ret（当前一共有的空瓶数） = ret（上次新换的瓶子） + temp % 2（上次换掉剩余的的旧空瓶）。
//while循环的条件是这次新换的瓶子不为零时，总数等于每次新换的汽水之和。
//
//int main()
//{
//	int price = 1;       //每瓶价格
//	int money = 20;      //总钱数
//	int sum=money/price; //20块钱可以买多少瓶汽水
//	int ret = sum;       //汽水得到的空瓶
//	int temp = 0;        //上一次兑换过程中是否有单独剩余的空瓶
//	while (ret/2 != 0)
//	{
//		temp = ret;      
//		ret = ret / 2;
//		sum += ret;
//		ret = ret + temp % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char a[] = "hello bit" ;
//	char b[20] = {0};
//	strcpy(b, a);//把字符串a中的内容复制到b中
//	printf("%s\n", b);
//	return 0;
//}
//
//#include<assert.h>
//char* my_strcpy(char*b, const char*a)
//{
//	char *ret = b;
//	assert(NULL != b);
//	assert(NULL != a );
//	while (*b++ = *a++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[] = "hello bit";
//	char b[20] = { 0 };
//	my_strcpy(b, a);
//	printf("%s\n", my_strcpy(b, a));
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}
//1
//size_t my_strlen1(const char* string)
//{
//	//count 来记录字符串的长度
//	size_t count = 0;
//	//判断参数为空的话返回一个错误的值
//	if (string == NULL)
//	{
//		return -1;
//	}
//	//遍历数组，指针后调并且计数
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//2
//#include<assert.h>
//size_t my_strlen2(const char* string)
//{
//	assert(string != NULL);
//	if (*string != '\0')
//	{
//		//此处应该时++string 而不是string++，后者穿先执行再+所以string 仍是指向第一个
//		//最好使用string+1因为前两个都会改变指针指向
//		return 1 + my_strlen2(string + 1);
//	}
//	return 0;
//}
//3
//#include<assert.h>
//size_t my_strlen3(const char* string)
//{
//	assert(string != NULL);
//	const char* prt = string;
//	while (*prt != '\0')
//	{
//		prt++;
//	}
//	return prt - string;
//}
//
//int main()
//{
//	char string[] = "hello world";
//	//printf("%lu\n", my_strlen1(string));
//	//printf("%lu\n", my_strlen2(string));
//	printf("%lu\n", my_strlen3(string));
//	system("pause");
//	return 0;
//}

int my_strlen1(const char* string)
{
	int count = 0;
	if (string == NULL)
	{
		return -1;
	}
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}

int main()
{
	char string[] = " ";
	printf("%lu\n", my_strlen1(string));
	//system("pause");
	return 0;
}