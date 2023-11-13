#include "main.h"
/**
 *_strspn - This is the entry point of the code
 *@s: input 1
 *@accept: input 2
 *
 *Return: i Success
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
