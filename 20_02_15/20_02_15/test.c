#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;
//	printf("%p\n", p);
//	return 0;
//}
////
//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;	
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}
//
//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char *)&n;
//	int *pi = &n;
//	*pc = 0; 
//	*pi = 0; 
//	return 0;
//}
//Ұָ��
//1.ָ��δ��ʼ��
//int main()
//{
//	int *p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//2. ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}
//3.ָ��ָ��Ŀռ��ͷ�
//
//int main()
//{
//	int *p = NULL;
//	//....
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%p\n", arr);// 007EFD1C
//	printf("%p\n", &arr[0]);//007EFD1C
//	int *p = arr;//p��ŵ���������Ԫ�صĵ�ַ
//	printf("%p\n", *p);// 007EFD1C
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p ?<====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}

