#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
//#include<time.h>
//#include<stdlib.h>
//const int N=10;
int main()
{

		int i = 1, p = 1, s = 1;
		while (s < 40) { i++; p = p * i; s = s + p; }
		printf("s=%d\n", s);

	////for循环
	//int a, b;
	//for (a = 0, b = 1; b < 20; a = a + b, b = a + b)
	//	printf("%d %d ", a, b); //0 1 1 2 3 5 8 13
	//printf("%d %d\n", a, b); //21 34

//让计算机随机出10道两位整数加法题供用户计算，每道题10分，计算完成后打印出得分。
	/*int i,x,y,z,c=0;
	srand(time(0));
	for(i=1; i<=N; i++)
	{
		x=rand()%90+10;
		y=rand()%90+10;
		printf("%d + %d = ",x,y);
		scanf("%d",&z);
		if(x+y==z) c++;
	}
	printf("最后得分：%d\n",c*10);*/

//打印出a~f中每个大小写字母所对应的ASCII码。
	//char c1 = 'A', d1 = 'a', c2 = 'F', ch;
	//for (ch = c1; ch <= c2; ch++, d1++)
	//{
	//	printf("%c: %d, ", ch, ch);
	//	printf("%c: %d\n", d1, d1);
	//}

//从键盘上输入两个整数，由用户回答它们的和、差、乘、除和取余运算的结果，并统计出正确答案的个数。
	//int x, y, z, c = 0;
	//printf("输入两个整数：");
	//scanf("%d %d", &x, &y);
	//printf("%d + %d = ", x, y); scanf("%d", &z); if (x + y == z) c++;
	//printf("%d - %d = ", x, y); scanf("%d", &z); if (x - y == z) c++;
	//printf("%d * %d = ", x, y); scanf("%d", &z); if (x * y == z) c++;
	//printf("%d / %d = ", x, y); scanf("%d", &z); if (x / y == z) c++;
	//printf("%d %% %d = ", x, y); scanf("%d", &z); if (x % y == z) c++;
	//printf("共5道题，答对%d道题\n", c);

	return 0;
}
