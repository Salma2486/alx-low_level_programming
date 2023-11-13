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
	int a, b, count = 0;

	for (a = 0; dest[a] != '\0'; a++)
		count++;
	for (b = 0; src[b] != '\0'; b++)
	dest[count++] = src[b];
	return (dest);
}
