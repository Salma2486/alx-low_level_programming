#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **string_nconcat - This is the entry point of the code
 *@s1: input 1
 *@s2: input 2
 *@n: input 3
 *Return:0 Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
	{s1 = ""; }
	if (s2 == NULL)
	{s2 = ""; }
	ptr = malloc(strlen(s1) + n + 1);
	if (ptr == NULL)
	{return (NULL); }
	for (i = 0; i < strlen(s1); i++)
	 {ptr[i] = s1[i]; }
	if (n >= strlen(s2))
		n = strlen(s2);
	for (i = 0; i < n; i++)
	{
		ptr[strlen(s1) + i] = s2[i];
	}
	ptr[i + strlen(s1)] = '\0';
	return (ptr);
}
