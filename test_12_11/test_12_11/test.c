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
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	int min = 0;
	int mid = 0;
	scanf_s("%d %d %d",&a,&b,&c);
	if (a > b)
		max= a;
	else
		max= b;
	if (b> c)
		min= b;
	else
		min = c;
	if (max > min)
		mid= max;
	else
		mid= min;
	printf("%d %d %d\n", max, mid, min);
	return 0;
}
