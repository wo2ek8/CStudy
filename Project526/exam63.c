#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	exam1();

	return 0;
}

int exam1() {
	int a = 10, *pa;

	pa = &a;
	//printf("%d, %d\n", pa, *pa);
	printf("%d, %d\n", pa, &a);

	*pa = 20;
	printf("%d, %d\n", a, *pa);

	return 0;
}