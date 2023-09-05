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

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");
	a = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (a == NULL)
		return (NULL);
	strcpy(a, s1);
	strcat(a, s2);
	return (a);
}

