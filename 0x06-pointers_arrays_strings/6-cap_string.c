#include "main.h"
/**
 **cap_string - This is the entry point of the code
 *
 *@str: input
 *Return: str
 */
char *cap_string(char *str)
{
	int i;
	int is_word_start = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_word_start && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			is_word_start = 0;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			is_word_start = 1;
		}
	}
	return (str);
}
