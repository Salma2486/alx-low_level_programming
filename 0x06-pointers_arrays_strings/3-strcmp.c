#include "main.h"
/**
 *_strcmp - This is the entry point of the code
 *
 *@s1: input 1
 *@s2: input 2
 *Return:0 Success
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	return (0);
}
