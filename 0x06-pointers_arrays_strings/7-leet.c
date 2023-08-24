#include "main.h"
/**
 **leet - This is the entry point of the code
 *
 *@str: input
 *Return: str
 */
char *leet(char *str)
{
	int i;
	char *original = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		if (c == 'a' || c == 'A')
		{
			str[i] = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			str[i] = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			str[i] = '0';
		}
		else if (c == 't' || c == 'T')
		{
			str[i] = '7';
		}
		else if (c == 'l' || c == 'L')
		{
			str[i] = '1';
		}
	}
	return (original);
}
