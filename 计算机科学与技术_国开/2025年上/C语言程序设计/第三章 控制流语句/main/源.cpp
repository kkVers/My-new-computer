#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void s_t();
void s_40();
void s_60();

void main()//你发现这里用的是void定义main，没有return，有的话不能有后面的表达式0，只能接分号结束
{
	/*s_t();*/

	s_40();

	/*s_60();*/
	
	/*int i, x;
	printf("请输入一个整数，若小于3则重输: ");
	do scanf("%d", &x); while (x <= 2);
	i = 2;
	do {
		while (x % i == 0) { printf("%d ", i); x /= i; }
		i++;
	} while (i <= x);
	printf("\n");*/

	//return 0;
}

void s_t()
{
	int i = 3, s = 0;
	switch (i) {
	case 2: s += i;
	case 3: s += i * i;
	case 4: s += i + 5; break;
	default: s += 6;
	}
	printf("s=%d\n", s);//s=17 若取消break 则s=23
}
void s_40()
{
	int i, s = 0;
	for (i = 1; i < 10; i++) {
		s += i * (i + 1);
		if (s > 40) break;
	}
	printf("s=%d\n", s);
}

void s_60()
{
	int i = 0, s = 0;
	do {
		i += 2;
		if (i % 3 == 0) continue;
		s += i * (i + 1);
	} while (s < 60);
	printf("s=%d\n", s);
}

	