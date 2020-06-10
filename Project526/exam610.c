#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//exam1();
	//exam2();
	exam3();

	return 0;
}

int exam1() {
	printf("%d\n", "ABCD");
	printf("%s\n", "ABCD");

	return 0;
}

int exam2() {
	int i, j, a[3][3];
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == j) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = 0;
			}
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int exam3() {
	int i, j, a[3][3];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i + j == 2) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = 0;
			}
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}