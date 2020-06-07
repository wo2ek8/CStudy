#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//exam1();
	//exam2();
	//exam3();
	//prob1();
	prob2();
	//prob3();

	return 0;
}

int exam1() {
	int a;
	int sum = 0;

	printf("양수 한 개 입력 : ");
	scanf("%d", &a);

	while (a != 0) {
		sum += a % 10;
		a /= 10;
	}

	printf("sum : %d", sum);

	return 0;
}

int exam2() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int exam3() {
	for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int prob1() {
	float result = 0;
	
	for (int i = 0; i < 8; i++) {
		result += (float)(3 * i + 2) / (i + 3);
	}

	printf("result : %f\n", result);
	
	return 0;
}

int prob2() {
	int result = 100;
	int n = 0;

	while (result >= 0) {
		n++;
		result -= n;
	}

	printf("result : %d\nn : %d", result, n);
	return 0;
}

int prob3() {
	int a;

	printf("양의 정수 1개를 입력 : ");
	scanf("%d", &a);

	for (int i = 7; i >= 0; i--) {
		if (a >> i & 1) {
			printf("유효비트수 : %d", i + 1);
			break;
		}
	}
	return 0;
}