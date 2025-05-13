#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "example.h"

void averageValue();
double AVE(double x, double y, double z);

int main()
{
	//averageValue();
	int a, b, c;
	printf("请输入任意三个整数：");
	scanf("%d,%d,%d", &a, &b, &c);
	printf("求和: %d\n", Sum(a, b, c));
	printf("乘积: %d\n", Product(a, b, c));

	return 0;
}

void averageValue()
{
	double a, b, c;
	double averageValue;
	a = 2; b = 3; c = 4;
	averageValue = AVE(a, b, c);
	printf("averageValue: %lf\n", averageValue);
	averageValue = AVE(a + 1, b + 2, c + 5);
	printf("averageValue: %Lf\n", averageValue);
}

//假定AVE函数的定义在abc.c程序文件中
double AVE(double x, double y, double z)
{
	return (x + y + z) / 3;
}