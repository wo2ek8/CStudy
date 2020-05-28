#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//exam1();
	//exam2();
	//exam3();
	exam4();
	return 0;
}

int exam1() {
	float sum = 0;

	for (int i = 1; i <= 9; i = i + 2) {
		sum += (float)i / (i + 2);
	}

	printf("sum : %.2f", sum);
	return 0;
}

int exam2() {
	int sum = 0;
	int i = 0;

	while (sum <= 100) {
		i++;
		sum += i;
	}

	printf("sum : %d\nn : %d", sum, i);
	return 0;
}

int exam3() {
	int num;

	printf("양수 한 개 입력 : ");
	scanf("%d", &num);

	/*while (num != 0) {
		printf("%d", num % 10);
		num = num / 10;
	}*/

	for (; num != 0; num = num / 10) {
		printf("%d", num % 10);
	}
	return 0;
}

int exam4() {
	int a;
	printf("입력 : ");
	scanf("%d", &a);
	while (a != 0) {
		printf("%d", a % 10);
		a /= 10;
	}
	return 0;
}