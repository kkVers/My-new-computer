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
	printf("��������������������");
	scanf("%d,%d,%d", &a, &b, &c);
	printf("���: %d\n", Sum(a, b, c));
	printf("�˻�: %d\n", Product(a, b, c));

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

//�ٶ�AVE�����Ķ�����abc.c�����ļ���
double AVE(double x, double y, double z)
{
	return (x + y + z) / 3;
}