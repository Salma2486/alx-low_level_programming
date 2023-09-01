#include "main.h"
/**
 *_strlen - This is the entry point of the code
 *
 *@s: input
 *
 *Return: length of string Success
 */
int _strlen(char *s)
{
	int a, count = 0;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	return (count);
}
