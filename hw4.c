#include <stdio.h>

int main(void) {
	int a, b;
	int c = 0;
	printf("Please enter a number: ");
	scanf_s("%d", &a);
	for (int i = 2; i <= a - 1; i++)
		if (a % i == 0)
			c++;
	if (c==0)
		printf("it is a prime number");
	else
		printf("it is not a prime number");

	return 0;



}