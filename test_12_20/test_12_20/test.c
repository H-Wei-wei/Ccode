#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}
//void exchange(int arr1[], int arr2[],int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = *(arr1 + i);
//		*(arr1 + i) = *(arr2 + i);
//		*(arr2 + i) = tmp;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	exchange(arr1, arr2, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//	return 0;
//}
//void reverse(int init[],int sz)
//{
//	int i = 0;
//	//趟数
//	for (i <= 0; i <= sz - 1; i++)
//	{
//		int j = 0;
//		//每趟的两两比较
//		for(j = 0; j < sz -i-1 ; j++)
//		{
//			if (init[j]>init[j + 1])
//			{
//				int tmp =init[j];
//				init[j] = init[j + 1];
//				init[j + 1] = tmp;
//			}
//
//		}
//	}
//
//}
//int main()
//{
//	int init[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//	int i = 0;
//	/*printf("输入数组:>");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", init[i]);
//	}
//	printf("\n");*/
//	int sz = sizeof(init) / sizeof(init[0]);
//	reverse(init, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", init[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void reverse(int init[], int sz)
//{
//	int i = 0;
//		for (i <= 0; i <= sz/2; i++)
//		{
//			int tmp = init[i];
//			init[i] = init[sz - i -1];
//			init[sz - i - 1] = tmp;
//		}
//}
//int main()
//{
//	int init[10] = {0};
//	int i = 0;
//	printf("输入数组:>");
//	for (i = 0; i < 10; i++)
//	{
//	   scanf("%d", &init[i]);
//	}
//	reverse(init, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", init[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i <= 0; i <= sz - 1; i++)
//	{
//		int j = 0;
//		//每趟的两两比较
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}