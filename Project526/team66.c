#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//yuchan2();
	//yuchan11();
	//yuchan12();
	//yuchan13();
	//test();
	hamin3();
	jaei3();
	//jaei1();

	return 0;
}

int yuchan2() {
	int i, sum = 100;

	for (i = 1; sum > 0; i++) {
		sum = sum - i;
	}

	printf("%d\n", sum);
	printf("%d", i - 1);

	return 0;
}

int yuchan11() {
	int a, b = -1;
	float sum = 0.0;

	for (a = 3; a <= 10; b = b + 2) {
		sum = sum + (float)(a + b) / a;
		a++;
	}
	printf("%.3f", sum);

	return 0;
}

int yuchan12() {
	int i, d = 0;
	float sum = 0.0;

	for (i = 2; i <= 9; d = d + 2) {
		sum = sum + (i + d) / (i + 1.0);
		i++;
	}

	printf("%.3f", sum);
	
	return 0;
}

int yuchan13() {
	int i, d = 1;
	float sum = 0.0;

	for (i = 1; i <= 8; d = d + 2) {
		sum = sum + (i + d) / (i + 2.0);
		i++;
	}

	printf("%.3f", sum);

	return 0;
}

int test() {
	int a, b = 0;
	
	scanf("%d", &a);

	for (; a >> b > 0;) {
		b = b + 1;
	}

	printf("\n\n%d", b);

	return 0;
}

int test2() {
	int a;
	int b = 0;

	scanf("%d", &a);

	for (; (a >> b) > 0;) {
		b++;
	}

	printf("%d", b);

	return 0;
}

int hamin3() {
	int num = 0;
	int i;

	printf("�Է� : ");
	scanf("%d", &num);

	for (i = 0; num > 0; i++) {
		num /= 2;
	}

	printf("��ȿ��Ʈ�� : %d", i);

	return 0;
}

int jaei3() {
	int a;

	printf("\n���� ���� 1���� �Է� : ");
	scanf("%d", &a);

	for (int i = 7; i >= 0; i--) {
		printf("%d", a >> i & 1);
		if (a >> i & 1) {
			printf("\n��ȿ��Ʈ�� : %d", i + 1);
			break;
		}
	}

	return 0;
}

int jaei1() {
	float result = 0;

	for (int i = 0; i < 8; i++) {
		result += (float)(3 * i + 2) / (i + 3);
	}

	printf("result : %f\n", result);

	return 0;
}