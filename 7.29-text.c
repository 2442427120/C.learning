#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

//C++ Primer Plus 编程练习第8题C语言实现
int main(void)
{
	char ch = 'a';
	int count = 0;
	FILE* pf;

	pf = fopen("character.txt", "r");
	if (pf == NULL)
	{
		printf("open file failure.\n");
		return 0;
	}

	fseek(pf, 0, SEEK_SET);
	while (fscanf(pf, "%c", &ch) != EOF)
	{
		if (isalpha(ch))
			++count;
	}
	if (feof(pf))
		printf("End of file reached.\n");
	else if (ferror(pf))
		printf("Input terminated by data mismatch.\n");
	else
		printf("Input terminated for unkonwn reason.\n");

	if (0 == count)
		printf("Not data.\n");
	else
		printf("%d characters in total.\n", count);

	fclose(pf);

	return 0;
}