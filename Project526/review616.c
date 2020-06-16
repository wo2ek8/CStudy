#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam7_1(char a, int b) {
	for (int i = 0; i < b; i++) {
		printf("%c", a);
	}
}

int exam7() {
	char a;
	int b;

	printf("문자 : ");
	scanf("%c", &a);
	printf("정수 : ");
	scanf("%d", &b);

	exam7_1(a, b);

	return 0;
}

int exam6_1(int a, int b) {
	if (a > b) {
		return a - b;
	}
	else {
		return b - a;
	}
}

int exam6() {
	int a;
	int b;

	printf("a : ");
	scanf("%d", &a);
	printf("b : ");
	scanf("%d", &b);

	printf("differ : %d", exam6_1(a, b));

	return 0;
}

//인자에 들어가는 & 와 *의 의미
//& : 주소를 넘겨줄테야!
//* : 주소를 받을테야!

//인자에 아닐때 
//* : 그 주소에 접근할테야!

void swap(int *x, int *y) {
	int temp;

	temp = *x; //temp = 5 
	*x = *y; //x = 10, a = 10
	*y = temp; //y = 5, b = 5
}

int exam5() {
	int a = 5;
	int b = 10;

	printf("swap 함수 호출 이전 : a = %d, b = %d\n", a, b);
	
	swap(&a, &b); //a의 주소, b의 주소를 인자로 swap 함수 호출

	printf("swap 함수 호출 이후 : a = %d, b = %d\n", a, b);

	return 0;
}

int exam4_1(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}

	return 0;
}

int exam4() {
	int a;
	int b;

	printf("a : ");
	scanf("%d", &a);
	printf("b : ");
	scanf("%d", &b);

	printf("max : %d", exam4_1(a, b));

	return 0;
}

int exam3_1(int a) {
	if (a >= 0) {
		return a;
	}
	else {
		return a * -1;
	}
}

int exam3() {
	int a;

	printf("a : ");
	scanf("%d", &a);

	printf("abs : %d", exam3_1(a));

	return 0;
}

float exam2_1(float a, float b) {
	float sum = a + b;

	return 0;
}

int exam2() {
	float a;
	float b;

	printf("a : ");
	scanf("%f", &a);
	printf("b : ");
	scanf("%f", &b);

	printf("sum : %f", exam2_1(a, b));

	return 0;
}

int exam1_1(int x, int y) {
	int sum = x + y;

	return sum;
}

int exam1() {
	int x;
	int y;

	printf("x : ");
	scanf("%d", &x);
	printf("y : ");
	scanf("%d", &y);

	printf("sum : %d", exam1_1(x, y));

	return 0;
}

//함수는 f(x) = y;

int main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	exam7();

	return 0;
}