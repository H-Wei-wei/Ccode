#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i =1; i <= 10; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;  // 输入的整数
//	int i = 0;
//	/*printf("输入一个整数：");
//	scanf("%d", &num);*/
//	for (num = 1; num <= 10; num++)
//	{
//	    num = num + ((num+1) % 2);
//		for ( i = 2; i < num; i++)
//		{
//			if (num%i == 0)
//			{
//				printf("%d\n", num);
//				break;
//			}
//		}
//	}
//	
//	return 0;
//}


//int prime(int n){
//
//	int i;
//
//	if (n>2 && !(n & 1) || n<2)return 0;
//
//	for (i = 3; i*i <= n; i += 2)
//
//	if (!(n%i)) return 0;
//
//	return 1;
//
//}
//
//int main(void){
//
//	int n;
//
//	for (n = 2; n < 100; n++)
//
//	if (prime(n))
//
//		printf("%3d", n);
//
//	printf("\n");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{ 
//	int i = 0;
//	int j = 0;     
//	for (i=100; i<=200; i++)
//	{        
//		for (j=2; j<i; j++) 
//		{            
//			if (i%j == 0)    
//			{              
//				break;       
//			}
//		}   
//		if (j==i)
//		{     
//			printf("%d\n",i);  
//		}    
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 100 == 0)
//			{
//				if (i % 400 == 0)
//					printf("%d \n ", i);
//			}
//			else
//			    printf("%d \n", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{	
//	int a,b;	
//	printf("输入两个数字求最大公约数：");
//	scanf("%d %d",&a,&b);	
//	while(a != b)	
//	{	
//		if(a > b)
//	      a = a - b;
//		else		
//		  b = b - a;
//	}
//	printf("最大公约数为：%d\n",a); 	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret = j*i;
//			printf("%d*%d=%d ",j,i,ret);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[10] = {0};
	int max = 0;
	printf("请输入十个整数：");
	for (i; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];
	for (i = 0; i < 9; i++)
	{
		if (max < arr[i + 1])
		   max = arr[i + 1];
	}
	printf("%d\n", max);

	return 0;
}
//int main()
//{
//	double i = 0;
//	double num = 0;
//	double ret = 0;
//	double j = -1;
//	for (i = 1; i <= 3; i++)
//	{
//		j = -j;
//		ret = (1/i)*j;
//		num = num + ret;
//	}
//	printf("%f\n", num);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{ 
//		if (i % 10 == 9)
//			j++;
//	}
//	printf("%d\n", j);
//   return 0;
//}
