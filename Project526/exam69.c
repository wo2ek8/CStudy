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
	int array[5];
	int sum = 0;

	printf("5���� ���� �Է� : ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
		sum += array[i];
	}

	printf("sum : %d", sum);

	return 0;
}

int exam2() {
	int array[10];
	int high = 0;
	int num;

	printf("�л� 10���� ������ �Է� : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
		if (array[i] > high) {
			high = array[i];
			num = i + 1;
		}
	}

	printf("���� : %d, ��ȣ : %d", high, num);

	return 0;
}

int exam3() { //�����ؾ���
	int array[10];
	int num;
	
	printf("�л� 10���� ������ �Է� : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
		if (array[0] < array[i]) {
			array[0] = array[i];
			num = i + 1;
		}
	}

	printf("���� : %d, ��ȣ : %d", array[0], num);

	return 0;
}

int exam4() {
	char str[20];
	int i = 0;

	printf("���ڿ��� �Է� : ");
	scanf("%s", str);

	while (str[i] != NULL) {
		i++;
	}

	printf("���ڿ��� ���� : %d", i);

	return 0;
}