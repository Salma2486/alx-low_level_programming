#include "main.h"
/**
 **_memset - This is the entry point of the code
 *@s: input 1
 *@b: input 2
 *@n: input 3
 *
 *Return:0 Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (0);
}
