#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//float circleArea(float radius);
//
//int main() {
//	float radius, area;
//
//	printf("반지름 입력 : ");
//	scanf("%f", &radius);
//
//	area = circleArea(radius);
//
//	printf("원의 넓이 : %.2f\n", area);
//
//	return 0;
//}
//
//float circleArea(float radius) {
//	return 3.14 * radius * radius;
//}

//int main() {
//	int a;
//
//	printf("양의 정수 1개 입력(n) : ");
//	scanf("%d", &a);
//
//	printf("%d", exam2(a));
//
//	return 0;
//}
//
//int exam2(int a) {
//	int b = 0;
//
//	for (int i = 1; i <= a; i++) {
//		b += i;
//	}
//
//	return b;
//}

//int exam3(int n, int k);
//
//int main() {
//	int n;
//	int k;
//	int sum;
//
//	printf("양의 정수 2개 입력(n, k) : ");
//	scanf("%d", &n);
//	scanf("%d", &k);
//
//	sum = exam3(n, k);
//
//	printf("sum : %d", sum);
//
//	return 0;
//}
//
//int exam3(int n, int k) {
//	int sum = 0;
//
//	for (int i = 1; i <= n; i++) {
//		if (i % k == 0) {
//			sum += i;
//		}
//	}
//
//	return sum;
//}