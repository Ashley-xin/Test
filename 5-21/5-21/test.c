////1.
////дһ���������ز����������� 1 �ĸ���
////���磺 15 0000 1111 4 �� 1
////����ԭ�ͣ�
////int count_one_bits(unsigned int value)
////{
////	 ���� 1��λ�� 
////}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#define SIZE 15
//int count_one_bits(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n = n >> 1 ;
//	}
//	
//	return count;
//}
//
//int count_one_bits1(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int result = count_one_bits(13);
//	int ret = count_one_bits1(13);
//	printf("%d\n",result);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
////2.��ȡһ�������������������е�ż��λ������λ��
////�ֱ��������������
//int main()
//{
//	int num = 0;
//	printf("������һ��������\n");
//	scanf("%d", &num);
//	printf("ż������Ϊ��\n");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("\n");
//	printf("��������Ϊ��\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
////3. ���һ��������ÿһλ��
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n /10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	printf("������һ��������\n");
//	scanf("%d", &num);
//	Print(num);
//	system("pause");
//	return 0;
//}
//
////4.���ʵ�֣�
////����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
////�������� :
////1999 2299
////������� : 7
//int Dif_Bit(int m, int n)
//{
//	int count=0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((((m >> i) ^ (n >> i)) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("����������������\n");
//	scanf("%d,%d", &m, &n);
//	printf("m��n�ڶ������в�ͬ��λ����%dλ\n",(Dif_Bit(m, n)));
//	system("pause");
//	return 0;
//}
//
//+ - * / %
//int main()
//{
	/*int a = 10;
	int b = 10;
	int i = ++a;
	int j = b++;*/

	/*float f1 = 7 / 2;
	float f2 = (float)7 / 2;
	float f3 = (float)(7 / 2);
	printf("%f\n%f\n%f\n", f1, f2, f3);
	*/
	/*int a = 10;
	int *p = &a;
	int **pp = &p;
	int ***ppp = &pp;
	***ppp = 99;
	printf("%d\n", a);
	system("pause");
	return 0;
}*/
//<<���Ʋ�����
//>>���Ʋ�����
//& //��λ��
//| //��λ��
//^ //��λ���