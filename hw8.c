#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double standard_deviation(double arr[],int a)
{
	double v = 0.0, avg, sum = 0.0;
	int i;
	for (i = 0; i < a; i++)
		sum += arr[i];
	avg = sum / a;

	for (i = 0; i < a; i++)
		v += pow((arr[i] - avg), 2);
	return sqrt(v/a);
}
int main(void) {
	int i;
	double arr[5];

	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++) {
		scanf(" %lf", &arr[i]);
	}
	printf("\n");
	printf("Standard Deviation = %.3lf", standard_deviation(arr,5));
	
}