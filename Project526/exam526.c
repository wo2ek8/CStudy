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

	printf("����� 2�� �Է� : ");
	scanf("%d%d", &m, &n);

	if (m > n) {
		temp = m;
		m = n;
		n = temp;
	}

	for (; m <= n; m++) {
		sum += m;
	}

	printf("�� : %d", sum);

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

	printf("���� ��� : %d", sum);

	return 0;
}

int exam3() {
	int n;
	int result = 1;

	printf("��� �� �� �Է� : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		result *= 2;
	}

	printf("��� : %d", result);

	return 0;
}