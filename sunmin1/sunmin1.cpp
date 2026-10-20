#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	printf("숫자를 입력하세요: ");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("짝수\n");
	}
	else {
		printf("홀수\n");
	}
	return 0;
}