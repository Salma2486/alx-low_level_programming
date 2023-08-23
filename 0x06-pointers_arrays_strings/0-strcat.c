#include "main.h"
/**
 *_strcat - This is the entry point of the code
 *
 *@dest: input 1
 *@src: input 2
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
	a++;
	for (b = 0; src[b] != '\0'; b++)
	dest[a++] = src[b];
	return (dest);
}
