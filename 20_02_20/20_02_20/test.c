#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	return 0;
//}
//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	{ 9802, "wang", 19 },
//	{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}

//1. ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//�����˼·���Ƚ�������Ϊsum����ǰһ���е�ƿ��������Ϊ�ʼ����Ǯ��Ϊmoney��
//���Թ�����money / price ƿ��ˮ��������������ƿ��һƿ��ˮ������ÿ�λ�������ˮ
//��Ϊsum / 2���ٶ�������������һ��Ϊ ret����һ�εĻ�������ˮ����һ��Ϊtemp
//����һ�ζһ��������Ƿ��е���ʣ��Ŀ�ƿ����
//ret����ǰһ���еĿ�ƿ���� = ret���ϴ��»���ƿ�ӣ� + temp % 2���ϴλ���ʣ��ĵľɿ�ƿ����
//whileѭ��������������»���ƿ�Ӳ�Ϊ��ʱ����������ÿ���»�����ˮ֮�͡�
//
//int main()
//{
//	int price = 1;       //ÿƿ�۸�
//	int money = 20;      //��Ǯ��
//	int sum=money/price; //20��Ǯ���������ƿ��ˮ
//	int ret = sum;       //��ˮ�õ��Ŀ�ƿ
//	int temp = 0;        //��һ�ζһ��������Ƿ��е���ʣ��Ŀ�ƿ
//	while (ret/2 != 0)
//	{
//		temp = ret;      
//		ret = ret / 2;
//		sum += ret;
//		ret = ret + temp % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char a[] = "hello bit" ;
//	char b[20] = {0};
//	strcpy(b, a);//���ַ���a�е����ݸ��Ƶ�b��
//	printf("%s\n", b);
//	return 0;
//}
//
//#include<assert.h>
//char* my_strcpy(char*b, const char*a)
//{
//	char *ret = b;
//	assert(NULL != b);
//	assert(NULL != a );
//	while (*b++ = *a++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[] = "hello bit";
//	char b[20] = { 0 };
//	my_strcpy(b, a);
//	printf("%s\n", my_strcpy(b, a));
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}
//1
//size_t my_strlen1(const char* string)
//{
//	//count ����¼�ַ����ĳ���
//	size_t count = 0;
//	//�жϲ���Ϊ�յĻ�����һ�������ֵ
//	if (string == NULL)
//	{
//		return -1;
//	}
//	//�������飬ָ�������Ҽ���
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//2
//#include<assert.h>
//size_t my_strlen2(const char* string)
//{
//	assert(string != NULL);
//	if (*string != '\0')
//	{
//		//�˴�Ӧ��ʱ++string ������string++�����ߴ���ִ����+����string ����ָ���һ��
//		//���ʹ��string+1��Ϊǰ��������ı�ָ��ָ��
//		return 1 + my_strlen2(string + 1);
//	}
//	return 0;
//}
//3
//#include<assert.h>
//size_t my_strlen3(const char* string)
//{
//	assert(string != NULL);
//	const char* prt = string;
//	while (*prt != '\0')
//	{
//		prt++;
//	}
//	return prt - string;
//}
//
//int main()
//{
//	char string[] = "hello world";
//	//printf("%lu\n", my_strlen1(string));
//	//printf("%lu\n", my_strlen2(string));
//	printf("%lu\n", my_strlen3(string));
//	system("pause");
//	return 0;
//}

int my_strlen1(const char* string)
{
	int count = 0;
	if (string == NULL)
	{
		return -1;
	}
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}

int main()
{
	char string[] = " ";
	printf("%lu\n", my_strlen1(string));
	//system("pause");
	return 0;
}