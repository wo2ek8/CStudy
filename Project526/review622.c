#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float exam2_1(float a, float b);

int main() {
	//exam1();
	exam2();

	return 0;
}

int exam1() {
	int x;
	int y;

	printf("x : ");
	scanf("%d", &x);
	printf("y : ");
	scanf("%d", &y);

	printf("sum : %d", exam1_1(x, y));//실매개변수?

	return 0;
}

int exam1_1(int x, int y) {//형식매개변수?
	int sum = x + y;

	return sum;
}

int exam2() {
	float a;
	float b;

	printf("a : ");
	scanf("%f", &a);
	printf("b : ");
	scanf("%f", &b);

	printf("sum : %f", exam2_1(a, b));

	return 0;
}

float exam2_1(float a, float b) {
	float sum = a + b;

	return sum;
}