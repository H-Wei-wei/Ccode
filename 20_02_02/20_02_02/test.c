#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));            //1字节
//	printf("%d\n", sizeof(short));           //2字节
//	printf("%d\n", sizeof(int));             //4字节
//	printf("%d\n", sizeof(long));            //大于4字节
//	printf("%d\n", sizeof(long long));       //大于8字节
//	printf("%d\n", sizeof(float));            //4字节
//	printf("%d\n", sizeof(double));          //8字节
//	printf("%d\n", sizeof(long double));     //大于8字节
//	return 0;
//}

//int main()
//{
//	printf("hello bit\n");
//	printf("he he\n");
//	return 0;
//}
//

//int main()
//{
//	int age = 21;
//	float weight = 45.5;
//	char ch = 'w';
//	printf("%d\n", age);
//	printf("%f\n",weight);
//	printf("%c\n",ch);
//	printf("%d\n",sizeof(age));
//	printf("%d\n",sizeof(weight));
//	printf("%d\n", sizeof(ch));
//	return 0;
//}

//int global = 2019;
//int main()
//{
//	int local = 2020;
//	int global = 2021;
//	printf("local = %d\nglobal = %d\n", local, global);
//	return 0;
//}
////当局部变量与全局变量同名时，优先使用局部变量

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//作用域
//1.局部变量的作用域是变量所在的局部范围
//2.全局变量的作用域是整个工程
//生命周期
//1.局部变量的生命周期：进入作用域生命周期开始，出作用域生命周期结束
//2.全局变量的生命周期：整个程序的生命周期

//
//enum Sex    //举例
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	2020;//字面常量
//	int a = 2;
//	const int b = 3;//const修饰的常变量
//	a = 5;
//	//b = 5;//不能改变b的值
//	printf("a=%d b=%d\n", a, b);
//    #define MAX 100
//	printf("%d\n", MAX);//#define定义的标识符常量
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr3));
//	return 0;
//}
////  转义字符\0是字符串的结束标志。在计算字符串长度时\0是结束标志，不算做字符串内容

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}
