//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int *p = &num;
//	*p = 5;
//	printf("%d\n", *p);
//	return 0;
//}
//struct stu
//{
//	char name[20]; //����
//	long age;      //����
//	char sex[5];   //�Ա�
//	char id[15];   //ѧ��
//};
//int  main()
//{
//	struct stu s = { "����", 20, "��", "20191209" };
//	printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
//	struct stu *ps = &s;
//	printf("name=%s age=%d sex=%s id=%s\n", ps->name, ps->age, ps->sex, ps->id);
//}
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int sum = 0;
//	int num2 = 0;
//	printf("����������������>");
//	scanf("%d  %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	
//	 return (x > y) ? x : y;
//}
//int get_max(int x,int y)
//
//{
//
//	return (x>y) ? x : y;
//
//}
//
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//Ҫ�����get_max����
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}


//#include<stdio.h>
//void main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//}
extern int add(x, y);
int main()
{
	int a = 10;
	int b = 20;
	int z = 0;
	z = add(a ,b);
	printf("%d\n", z);
	return 0;
}


