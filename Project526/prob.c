#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//prob1();
	//prob2();
	prob3();

	return 0;
}

int prob1(void) {
	int a;

	printf("���� ũ�⸦ �Է�(n, Ȧ��) : ");
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (i == j || j == a - (i + 1)) {
				printf(" *");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}

int prob2(void) {
	int a = 1;
	int b[10] = {0, };

	printf("Ű����� ������ �ݺ� �Է� : ");
	

	while(a != 0) {
		scanf("%d", &a);
		a %= 10;
		b[a]++;
	}

	for (int i = 0; i < 10; i++) {
		printf("b[%d] : %d\n", i, b[i]);
	}

	return 0;
}

int prob3(void) {
	char a[20];
	char b;
	int i = 0;

	printf("���ڿ�(20�� �̸�)�� ���ڸ� �Է� : ");
	scanf("%s\n", &a);
	scanf("%c", &b);

	while (a[i] != NULL) {
		if (a[i] != b) {
			printf("%c", a[i]);
		}
		i++;
	}

	return 0;
}