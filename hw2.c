#include <stdio.h>
int main(void)
{
	double km, miles;
	printf("Please enter kilometers: ");
	scanf_s("%lf", &km);
	miles = km * 0.62137
	printf("%.1lf km is equal to %.1lf miles.\n", km, miles);
	return 0;
}
