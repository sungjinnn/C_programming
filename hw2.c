#include <stdio.h>

int main(void)
{
	double km, miles;
	printf("Please enter kilometers: ");
	scanf_s("%lf", &km);
	miles = km * 0.62150403977;// 1/1.609=0.62150403977
	printf("%.1lf km is equal to %.1lf miles.\n", km, miles);

	return 0;
}