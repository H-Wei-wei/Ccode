#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
int main()
{
	int a=0, b=0, c=0;
	int p=0;
	scanf("%d %d %d", &a, &b, &c);
	if (b>a)
	{
		p = a;
		a = b;
		b = p;
	}
	if (c>a)
	{
		p = a;
		a = c;
		c = p;
	}
	if (c>b)
	{
		p = b;
		b = c;
		c = p;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret*j;
//		}
//	      sum = sum + ret;
//       }
//	printf("sum=%d\n", sum);
//	return 0;
//}