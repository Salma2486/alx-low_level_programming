#include "main.h"
/**
 **_strpbrk - This is the entry point of the code
 *@s: input 1
 *@accept: input 2
 *
 *Return:0 Success
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}

