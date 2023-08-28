#include "main.h"
/**
 **_strchr - This is the entry point of the code
 *@s: input 1
 *@c: input 2
 *
 *Return:0 Success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[0] + i);
		}
	}
	return ('\0');
}
