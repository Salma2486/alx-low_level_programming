#include "main.h"
/**
 **rot13 - This is the entry point of the code
 *
 *@s: input
 *Return: *s
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = data2[j];
				break;
			}
		}
	}
	return (s);
}

