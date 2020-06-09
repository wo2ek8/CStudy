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

	printf("5개의 정수 입력 : ");

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

	printf("학생 10명의 성적을 입력 : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
		if (array[i] > high) {
			high = array[i];
			num = i + 1;
		}
	}

	printf("점수 : %d, 번호 : %d", high, num);

	return 0;
}

int exam3() { //수정해야함
	int array[10];
	int num;
	
	printf("학생 10명의 성적을 입력 : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
		if (array[0] < array[i]) {
			array[0] = array[i];
			num = i + 1;
		}
	}

	printf("점수 : %d, 번호 : %d", array[0], num);

	return 0;
}

int exam4() {
	char str[20];
	int i = 0;

	printf("문자열을 입력 : ");
	scanf("%s", str);

	while (str[i] != NULL) {
		i++;
	}

	printf("문자열의 길이 : %d", i);

	return 0;
}