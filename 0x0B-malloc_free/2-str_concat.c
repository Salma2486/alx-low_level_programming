#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **str_concat - This is the entry point of the code
 *@s1: input
 *@s2: input 2
 *Return:0 Success
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		a[i] = s1[i];
	for (i = 0; i < strlen(s2); i++)
		a[i + strlen(s1)] = s2[i];
	return (a);
}
