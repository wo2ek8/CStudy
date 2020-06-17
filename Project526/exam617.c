#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int arraySum(int *arr);
//
//int main(void) {
//	int arr[5];
//	int sum;
//
//	printf("정수 5개를 입력 : ");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	sum = arraySum(arr);
//
//	printf("배열의 합 : %d", sum);
//
//	return 0;
//}
//
//int arraySum(int *arr) {
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++) {
//		sum += arr[i];
//	}
//
//	return sum;
//}

//int arrayMax(int *arr);
//
//int main(void) {
//	int arr[5];
//	int max;
//
//	printf("정수 5개를 입력 : ");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	max = arrayMax(arr);
//
//	printf("최대값 : %d", max);
//
//	return 0;
//}
//
//int arrayMax(int *arr) {
//	int max = arr[0];
//
//	for (int i = 1; i < 5; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//
//	return max;
//}

int strLen(char *str);

int main(void) {
	char str[20];
	int i = 0;
	int len;

	printf("문자열을 입력(20자 미만) : ");
	scanf("%s", str);

	printf("문자열의 길이 : %d", strLen(str));

	return 0;
}

int strLen(char *str) {
	int i = 0;

	while (str[i] != NULL) {
		i++;
	}

	return i;
}