#include "main.h"
/**
 **_strcpy - This is the entry point of the code
 *
 *@src: input 2
 *@dest: input 1
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
