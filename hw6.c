#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void odd(int arr[], int len) {
	int i;
	printf("Odd numbers: ");
	for (i = 0; i < len; i++) {
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}
void even(int arr[], int len) {
	int j;
	printf("Even numbers: ");
	for (j = 0; j < len; j++) {
		if (arr[j] % 2 == 0) {
			printf("%d ", arr[j]);
		}
	}
}
int main(void) {
	int arr[5];
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\n");
	odd(arr, 5);
	even(arr, 5);

	return 0;

}