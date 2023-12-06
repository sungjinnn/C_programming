#include <stdio.h>
#include <string.h>
typedef struct city
{
	char name[40];
	char country[40];
	int population;
} City;

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main(void){

	City arr[3];
	int i;

	printf("Input three cities: \n");

	for (i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name)-1, stdin);//문자열 입력
		arr[i].name[strlen(arr[i].name) - 1] = '\0'; //fgets()함수에서 \n 제거하는 것
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country)-1, stdin);
		arr[i].country[strlen(arr[i].country) - 1] = '\0';
		printf("Population> ");
		scanf_s("%d", &arr[i].population);
		ClearLineFromReadBuffer();
	}
	
	printf("\nPrinting the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people \n",i+1,arr[i].name,
			arr[i].country,arr[i].population);
	}
}