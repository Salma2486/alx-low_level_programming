#include "main.h"
/**
 **_strstr - This is the entry point of the code
 *@haystack: input 1
 *@needle: input 2
 *Return:0 Success
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
