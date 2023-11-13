#include "main.h"
/**
 **_memcpy - This is the entry point of the code
 *@dest: input 1
 *@src: input 2
 *@n: input 3
 *Return:0 Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
