#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));            //1�ֽ�
//	printf("%d\n", sizeof(short));           //2�ֽ�
//	printf("%d\n", sizeof(int));             //4�ֽ�
//	printf("%d\n", sizeof(long));            //����4�ֽ�
//	printf("%d\n", sizeof(long long));       //����8�ֽ�
//	printf("%d\n", sizeof(float));            //4�ֽ�
//	printf("%d\n", sizeof(double));          //8�ֽ�
//	printf("%d\n", sizeof(long double));     //����8�ֽ�
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
////���ֲ�������ȫ�ֱ���ͬ��ʱ������ʹ�þֲ�����

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//������
//1.�ֲ��������������Ǳ������ڵľֲ���Χ
//2.ȫ�ֱ���������������������
//��������
//1.�ֲ��������������ڣ������������������ڿ�ʼ�����������������ڽ���
//2.ȫ�ֱ������������ڣ������������������

//
//enum Sex    //����
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	2020;//���泣��
//	int a = 2;
//	const int b = 3;//const���εĳ�����
//	a = 5;
//	//b = 5;//���ܸı�b��ֵ
//	printf("a=%d b=%d\n", a, b);
//    #define MAX 100
//	printf("%d\n", MAX);//#define����ı�ʶ������
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
////  ת���ַ�\0���ַ����Ľ�����־���ڼ����ַ�������ʱ\0�ǽ�����־���������ַ�������

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \32��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}
