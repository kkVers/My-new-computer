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

	////forѭ��
	//int a, b;
	//for (a = 0, b = 1; b < 20; a = a + b, b = a + b)
	//	printf("%d %d ", a, b); //0 1 1 2 3 5 8 13
	//printf("%d %d\n", a, b); //21 34

//�ü���������10����λ�����ӷ��⹩�û����㣬ÿ����10�֣�������ɺ��ӡ���÷֡�
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
	printf("���÷֣�%d\n",c*10);*/

//��ӡ��a~f��ÿ����Сд��ĸ����Ӧ��ASCII�롣
	//char c1 = 'A', d1 = 'a', c2 = 'F', ch;
	//for (ch = c1; ch <= c2; ch++, d1++)
	//{
	//	printf("%c: %d, ", ch, ch);
	//	printf("%c: %d\n", d1, d1);
	//}

//�Ӽ����������������������û��ش����ǵĺ͡���ˡ�����ȡ������Ľ������ͳ�Ƴ���ȷ�𰸵ĸ�����
	//int x, y, z, c = 0;
	//printf("��������������");
	//scanf("%d %d", &x, &y);
	//printf("%d + %d = ", x, y); scanf("%d", &z); if (x + y == z) c++;
	//printf("%d - %d = ", x, y); scanf("%d", &z); if (x - y == z) c++;
	//printf("%d * %d = ", x, y); scanf("%d", &z); if (x * y == z) c++;
	//printf("%d / %d = ", x, y); scanf("%d", &z); if (x / y == z) c++;
	//printf("%d %% %d = ", x, y); scanf("%d", &z); if (x % y == z) c++;
	//printf("��5���⣬���%d����\n", c);

	return 0;
}
