#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//exam1();
	//exam2();
	exam3();
	return 0;
}

int exam1() {
	int m;
	int n;
	int sum = 0;
	int temp;

	printf("양수를 2개 입력 : ");
	scanf("%d%d", &m, &n);

	if (m > n) {
		temp = m;
		m = n;
		n = temp;
	}

	for (; m <= n; m++) {
		sum += m;
	}

	printf("합 : %d", sum);

	return 0;
}

int exam2() {
	int sum = 0;
	
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
		else {
			sum -= i;
		}
	}

	printf("연산 결과 : %d", sum);

	return 0;
}

int exam3() {
	int n;
	int result = 1;

	printf("양수 한 개 입력 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		result *= 2;
	}

	printf("출력 : %d", result);

	return 0;
}