#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double standard_deviation(double arr[],int a)
{
	double v = 0.0, avg = 0.0, sum = 0.0;
	int i;
	for (i = 0; i < a; i++)
		sum += arr[i];
	avg = sum / a;

	sum = 0.0;

	for (i = 0; i < a; i++)
		sum += pow((arr[i] - avg), 2);
	v = sum / a;
	return sqrt(v);
}
int main(void) {
	int i;
	double arr[5];

	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++) {
		scanf(" %lf", &arr[i]);
	}
	printf("Standard Deviation = %.3lf\n", standard_deviation(arr,5));
	
}