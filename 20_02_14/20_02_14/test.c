#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 6;
//  int c = 0;
//	printf("%d %d\n", a, b);
//  c = b;    //可读性好
//  a = c;
//  b = c;
//
//	a = a + b;  //当两个数很大时，和可能会溢出
//	b = a - b;
//	a = a - b;
//异或
//  a = a^b;   //可读性差
//  b = a^b;
//  a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		if (value % 2 == 1)
//			count++;
//		value = value / 2;  //value/=2;  
//	}
//	return count;
//}
//
//int count_one_bits(int value)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((value >> i) & 1) == 1)
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int value = 5;
//	int ret = 0;
//	ret = count_one_bits(value);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int count_one_bits(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//        n = n&(n - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int a = -1;
//    int i = 0;
//	printf("偶数位:");
//	for (i = 0; i < 32; i+=2)
//	{
//		printf("%d", (a >> i) & 1);
//     }
//	printf("\n");
//	printf("奇数位:");
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include <stdio.h> 
//int main () 
// {
//	 int num = 0, i = 0;
//	 scanf("%d", &num);
//	 printf("奇数序列为：");
//	 for (i = 31; i >= 0; i -= 2)  
//	 {
//		 printf("%d ", (num >> i) & 1);   
//	 }
//	 printf("\n");
//	 printf("偶数序列为：");
//	 for (i = 30; i >= 0; i -= 2)  
//	 {
//		 printf("%d ", (num >> i) & 1);
//	 }    
//	 printf("\n");
//	 return 0;
// }

//int main()
//{
//	int m = 1999;//011111001111
//	int n = 2299;//100011111011
//	int count = 0;
//	int num = 0;
//	num = m^n; //111100110100
//	printf("%d\n", num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	printf("%d\n", i);
//	printf("%d\n", sizeof(i));
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int num = sizeof(a);
//	printf("%d\n", num);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}	
//
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int x = ++a;
//	printf("x=%d a=%d\n", x, a);
//	int y = --a;
//	printf("y=%d a=%d\n", y, a);
//	return 0;
//}
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\ni = %d\n", a, b, c, d, i);
//	return 0;
//}
