#include <stdio.h>
#include <string.h>
void change_word(char* ch)
{	
	int i;
	const int diff = 'a' - 'A';
	ch[strlen(ch) - 1] = 0;
	for (i = 0; i < strlen(ch); i++)
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] += diff;
		else if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= diff;
}

int main(void)
{
	char ch[50];
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);
	change_word(ch);
	printf("Output> %s\n", ch);
	return 0;
}