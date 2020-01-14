#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1. 实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int num = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			num = j*i;
//			printf("%d*%d=%d  ", j, i, num);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//2. 给定两个整形变量的值，将两个值的内容进行交换。
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int num = 0;
//	num = i;
//	i = j;
//	j = num;
//	printf("i=%d j=%d\n", i, j);
//	return 0;
//}
//3. 实现一个函数来交换两个整数的内容。
//void cmp(int* px, int* py)
//{
//	int num = 0;
//	num = *px;
//	*px = *py;
//	*py = num;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//    cmp(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//4. 实现函数判断year是不是润年。
//要求：利用上面实现的函数打印1000到2000年的闰年。
//int is_leep_year(int year)
//{
//	if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	if (year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		while (is_leep_year(year) == 1)
//		{
//			printf("%d ", year);
//			break;
//	    }
//	}
//	return 0;
//}
//5. 实现一个函数，判断一个数是不是素数。
//要求：利用上面实现的函数打印100到200之间的素数。
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			return  0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		while (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	printf("\n");
//	return 0;
//}

//1. 递归和非递归分别实现求第n个斐波那契数
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1)+fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//非递归
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int z = 1;
//	while (n > 2)
//	{
//		z = a + b;
//		a = b;
//		b = z;
//		n--;
//	}
//	return z;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int z = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 3; i <= n; i++)
//	{
//		z = a + b;
//		a = b;
//		b = z;
//	}
//	printf("%d\n", z);
//	return 0;
//}
//2. 编写一个函数实现n的k次方，使用递归实现。
//要求：k可以正数或负数
//double CF(int n, int k)
//{
//	if (k > 0)
//		return n*CF(n, k - 1);
//	if (k < 0)
//		return (1.0/n)*CF(1.0/ n, k + 1);
//	if (k ==0)
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	scanf("%d %d", &n,&k);
//	ret = CF(n, k);
//	printf("%d^%d=%f\n", n, k, ret);
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如：调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int m = 0;
//int DigitSum(int n)
//{       
//		if (n > 9)
//		{
//			DigitSum(n / 10);
//	     }  	
//		m = m+n%10;
//		return m;
//}
//int main()
//{
//	int n =0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//int reverse_string(char * string)
//{
//		if (*string == '\0')
//			return 0;
//		else
//		  return 1+reverse_string(string + 1);
//}
//int main()
//{
//	char *string = "abcdef";
//	int len = 0;
//	printf("%s\n", string);
//	len=reverse_string(string);
//	while (len != 0)
//	{
//		printf("%c",*(string+len-1));
//	    len--;
//	}
//	printf("\n");
//	return 0;
//}
//5. 递归和非递归分别实现strlen
//递归
//int strlen(char*p)
//{
//	if (*p == 0)
//		return 0;
//	else
//		return 1 + strlen(p + 1);
//}
//int main()
//{
//	char *p = "abcdefg";
//	int len = 0;
//	len=strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
//非递归
//int strlen(char*p)
//{
//	int i = 0;
//	while (*p != '\0')
//	{
//		p++;
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char *p = "abcdefg";
//	int len = 0;
//	len = strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
//n的阶乘——递归
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//非递归
//int fac(int n)
//{
//	int num = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		num = num*i;
//	}
//	return num;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//7. 递归方式实现打印一个整数的每一位
//int mg(int i)
//{
//	if (i > 9)
//	{
//		mg(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	mg(i);
//	printf("\n");
//	return 0;
//}