#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//在这里完成代码
//	int* p = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}
//
//void Reverse(char* str, int sz)
//{
//	int i = 0;
//	for (i = sz-1; i >=0; i--)
//	{
//		printf("%c", *(str + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	char str[] = "hello bit";
//	//在这里完成下面函数，参数自己设计，要求：使用指针
//	int sz = sizeof(str) / sizeof(str[0]);
//	Reverse(str,sz);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	int num = 0;
//	int x = 13;
//	int y = (x / 2);
//	for (j = 1; j < x,y>=0; j += 2,y--)
//	{
//		for (num = 0;  num < y; num++)
//		{ 
//	     	printf(" ");
//        }
//	    for (i = 0; i < j; i++)
//	    {
//		   printf("*");
//		}	 
//		printf("\n");
//	}
//	 num = 0;
//	 x = 13;
//	 y = (x / 2);
//	for (j = x,m=1; j >0,m <= y;m++, j -= 2)
//	{ 
//		for (num =0; num < m; num++)
//		{
//			printf(" ");
//		}
//		for (i = 0; i < j-2; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//error
int main()
{
	int num = 0;
	int x = 0;
	int a = 0;
	int	b = 0;
	int c = 0;
	int m = 0;
	int n = 0;
	for (num = 0; num <= 100000; num++)//12345
	{
		//求出每位上的数
	    a = num % 10;//个
	   	b = (num / 10) % 10;//十
	    c = (num / 100) % 10; //百
	    m = (num / 1000) % 10;//千
	    n = (num / 10000) % 10;//万
		//计算数的位数
		while (num % 10)
		{
			x++;
			num = num / 10;
		}
		//比较
		if (num == (m^x + n^x + a^x + b^x + c^x))
		{
			printf("%d ", num);
		}
	}
	return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a, b, c;
//	int i = 100;
//	for (i; i < 1000; ++i)
//	{
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = (i / 100) % 10;
//		if (i == a * a*a + b * b*b + c * c*c)
//		{
//			printf("%d \n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{	
//	int i = 0;
//	for (i = 0;i<= 999; i++)
//	{	
//		//确定i是几位数		
//		int n = 1;		
//		int sum = 0;	
//		int tmp = i;	
//		while (tmp / 10)		
//		{		
//			n++;
//			tmp = tmp / 10;		
//		}	
//		//拆下每一位求和
//		tmp = i;	
//		while (tmp)	
//		{		
//			sum = sum + pow(tmp % 10, n);	
//			tmp = tmp / 10;	
//		}		
//		//判断	
//		if (sum==i)	
//			printf("%d ", i);
//	}	
//	getchar();
//	return 0;
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, m;
//	int Sn = 0, temp = 0;
//	scanf("%d", &m);
//	for (i = 1; i <= 5; i++)
//	{
//		temp = temp * 10 + m;				
//		Sn += temp;						
//	}
//	printf("Sn=%d\n", Sn);
//
//	system("pause");
//	return 0;
//}
