#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void loop_count_statistics();
int cube(int);

void main() {/*
	loop_count_statistics();*/
}

void loop_count_statistics() {
	int c1 = 0, c2 = 0, c3 = 0;
	int i, j, k;
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) c1++;
		for (k = 5; k >= i; k--) c2++;
		c3++;
	}
	printf("%d %d %d\n", c1, c2, c3);
}

int cube(int) {
	int i;
	for (i = 10; i <= 16; i++) {
		int j = 2, k = i;
		printf("%d:", i);
		do {
			while (k % j == 0) { printf("%d ", j); k /= j; }
			j++;
		} while (k >= j);
		printf("\n");
}