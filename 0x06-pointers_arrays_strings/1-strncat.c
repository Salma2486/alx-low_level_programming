#include "main.h"
/**
 *_strncat - This is the entry point of the code
 *
 *@n: input
 *@dest: input 1
 *@src: inpu 2
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, count = 0;

	for (a = 0; dest[a] != '\0'; a++)
		count++;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
	dest[count++] = src[b];
	}
	dest[count + b] = '\0';
	return (dest);
}
