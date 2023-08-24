#include "main.h"
/**
 **_strncpy - This is the entry point of the code
 *
 *@n: input 3
 *@dest: input 1
 *@src: input 2
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
