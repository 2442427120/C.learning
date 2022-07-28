#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//C++ Primer Plus 第六章编程练习第7题C语言实现
int main(void)
{
	int vowels_number = 0;
	int consonants_number = 0;
	int others = 0;
	char words[20];

	printf("Enter words (q to quit):\n");
	while (scanf("%s", words) && (strcmp(words, "q") != 0))
	{
		if (isalpha(words[0]))
		{
			if ((words[0] == 'a') || (words[0] == 'e') || (words[0] == 'i') || (words[0] == 'o') || words[0] == 'u'
				|| (words[0] == 'A') || (words[0] == 'E') || (words[0] == 'I') || (words[0] == 'O') || words[0] == 'U')
				vowels_number++;
			else
				consonants_number++;

		}
		else
			others++;
	}

	printf("%d words beginning with vowels\n", vowels_number);
	printf("%d words beginning with consonants\n", consonants_number);
	printf("%d others\n", others);

	return 0;
}