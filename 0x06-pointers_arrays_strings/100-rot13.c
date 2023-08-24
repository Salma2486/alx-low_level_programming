#include "main.h"
/**
 **rot13 - This is the entry point of the code
 *
 *@s: input
 *Return: *s
 */
char *rot13(char *s)
{
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvwxyz";
	char *ptr = s;

	while (*s)
	{
		for (j = 0; j < 52; j++)
		{
			if (*s == data1[j])
			{
				*s = data2[j];
				break;
			}
		}
		s++;
	}
	return (ptr);
}

