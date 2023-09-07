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
	unsigned int len1;
	unsigned int len2;
	char *ptr;

	if (s1 == NULL)
	{s1 = ""; }
	if (s2 == NULL)
	{s2 = ""; }
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
	{return (NULL); }
	for (i = 0; i < len1; i++)
	 {ptr[i] = s1[i]; }
	if (n >= len2)
		n = len2;
	for (i = 0; i < n; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[i + len1] = '\0';
	return (ptr);
}
