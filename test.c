#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>
//#define MAX 10
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);
	/*int arr[MAX] = {0};
	printf("%d\n", MAX);*/
	/*enum Sex s = FEMALE;
	printf("%d\n", MALE);*/
	
	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b', 'c'};
	// 
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));

	//printf("c:\\test\\32\\test.c");
	//printf("%d\n", strlen("c:\test\32\test.c"));

	//int line = 0;
	//printf("�������\n");

	//while (line < 20000)
	//{

	//	printf("��һ�д���: %d\n", line);
	//	line++;

	//}
	//if (line >= 20000)
	//	printf("��offer\n");

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//int i = 0;
	//while (i < 10);
	//{

	//	printf("%d", arr[i]);
	//	
	//}

	//{
	//	int arr[10] = { 0 };
	//	printf("%d\n", sizeof(arr));

	//	return 0;
	//}
//    return 0;
//} 

//int main()
//{
//	int arr[20] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//
//	return 0; 
//
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; ++killer)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("%c is killer\n", killer);
//
//	}
//}

//int main(void)
//{
//	printf("To C, or not to C: that is the question.\n");
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = ++a;
//	int b = --a;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 15;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	double firstNumber, secondNumber, product;
//	printf("��������������: ");
//	
//	scanf("%lf %lf", &firstNumber, &secondNumber);
//	
//	product = firstNumber * secondNumber;
//	
//	printf("��� = %.2lf", product);
//	
//	return 0;
//}


//int main()
//{
//	double firstNumber, secondNumber, product;
//	printf("��������������: ");
//
//	 �û���������������
//	scanf("%lf %lf", &firstNumber, &secondNumber);
//
//	 �������������
//	product = firstNumber * secondNumber;
//
//	 �������� %.2lf ��������С����
//	printf("��� = %.2lf", product);
//
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//void test()
//{
//	satic ����ȫ�ֱ������ֲ��������ڱ䳤
//  static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	extern int  g_val;
//	printf("g_avl = %d\n", g_val);
//
//	return 0;
//}

//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//
//}
//#define �����ʶ������
//#define MAX 100
//#define ���Զ����-������


//int Max(int x, int y)
//{
//	if (x > y)
//	    return x;
//	else
//		return y;
//}
//#define MAX(X, Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;
//
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	//*pc = 'a';
//	//printf("%c\n", ch);
//	return 0;
//}

//int main(void)
//{
//	int length, width, helght, volume, weight;
//	length = 12;
//	width = 10;
//	helght = 8;
//	volume = length * width * helght;
//	weight = (volume + 165) / 166;
//
//	printf("Diensions:%dx%dx%d\n", length, width, helght);
//	printf("Volume:%d\n", volume);
//	printf("weight:%d\n", weight);
//	printf("%d\n", length * width * helght);
//	return 0;
//}

//int main()
//{
//	int a = 10;//������4�����ֽڵĿռ�
//	//printf("%p\n", &a);
//	int* p = &a;//p��һ������-ָ�����
//	//printf("%p\n", p);
//	*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}



//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book b1 = { "C���Գ������", 55 };
//	strcpy(b1.name, "C++");//�ַ�����-�⺯��-<string.h>
//	printf("%s\n", b1.name);
//
//	//struct Book* pb = &b1;
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%d\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}














