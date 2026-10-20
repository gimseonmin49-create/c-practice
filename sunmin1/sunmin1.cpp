#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	printf("정수 두 개를 입력하세요: ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("큰 수: %d\n", a);
	}
	else {
		printf("큰 수: %d\n", b);
	}
	return 0;
}