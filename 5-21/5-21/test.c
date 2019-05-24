////1.
////写一个函数返回参数二进制中 1 的个数
////比如： 15 0000 1111 4 个 1
////程序原型：
////int count_one_bits(unsigned int value)
////{
////	 返回 1的位数 
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
////2.获取一个数二进制序列中所有的偶数位和奇数位，
////分别输出二进制序列
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &num);
//	printf("偶数序列为：\n");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("\n");
//	printf("奇数序列为：\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
////3. 输出一个整数的每一位。
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
//	printf("请输入一个整数：\n");
//	scanf("%d", &num);
//	Print(num);
//	system("pause");
//	return 0;
//}
//
////4.编程实现：
////两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
////输入例子 :
////1999 2299
////输出例子 : 7
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
//	printf("请输入两个整数：\n");
//	scanf("%d,%d", &m, &n);
//	printf("m和n在二进制中不同的位数有%d位\n",(Dif_Bit(m, n)));
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
//<<左移操作符
//>>右移操作符
//& //按位与
//| //按位或
//^ //按位亦或