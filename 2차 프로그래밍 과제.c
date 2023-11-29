#define _CRT_SECURE_NO_WARNINGS
#include "ascii_art.h"
#include <stdio.h>

int main(void)
{
	char (*art1)[46] = ascii_main;
	char (*art2)[18] = ascii_flower;
	char (*art3)[57] = ascii_castle;

	int Input1, Input2, Input3;
	int i, j, k;

	while (1) {

		printf("그림 번호 선택(1.main, 2.flower, 3.castle, 기타:종료): ");
		scanf("%d", &Input1);
		if (Input1 > 3 || Input1 < 1) {
			printf("안녕히 가세요.");
			break;
		}
		printf("오른쪽으로 몇 칸 이동할까요? ");
		scanf("%d", &Input2);
		printf("아래로 몇 줄 이동할까요? ");
		scanf("%d", &Input3);
		printf("선택한 그림을 해당 위치로부터 출력합니다.\n");

		for (i = 0; i < Input3; i++)
			printf("\n");

		if (Input1 == 1) {
			for (i = 0; i < 9; i++) {
				for (k = 0; k < Input2; k++)
					printf(" ");
				for (j = 0; j < 46; j++)
					printf("%c", (*(art1 + i))[j]);
				printf("\n");
			}
		}
		if (Input1 == 2) {
			for (i = 0; i < 13; i++) {
				for (k = 0; k < Input2; k++)
					printf(" ");
				for (j = 0; j < 18; j++)
					printf("%c", (*(art2 + i))[j]);
				printf("\n");
			}
		}
		if (Input1 == 3) {
			for (i = 0; i < 20; i++) {
				for (k = 0; k < Input2; k++)
					printf(" ");
				for (j = 0; j < 57; j++)
					printf("%c", (*(art3 + i))[j]);
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}
	