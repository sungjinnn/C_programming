#include <stdio.h>

int binary_transform(int n) {
	if (n < 2) {
		printf("%d", n);
	}
	else {
		binary_transform(n / 2);
		printf("%d", n % 2);
	}
}

int main(void) {
	int num;
	printf("please enter a number: ");
	scanf_s("%d", &num);
	binary_transform(num);
	return 0;
}