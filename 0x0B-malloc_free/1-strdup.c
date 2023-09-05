#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **_strdup - This is the entry point of the code
 *@str: input
 *
 *Return:0 Success
 */
char *_strdup(char *str)
{
	char *r;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	r = malloc((strlen(str + 1)) * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
	{
		r[i] = str[i];
	}
	return (r);
}
