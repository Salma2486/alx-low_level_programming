#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **_calloc - This is the entry point of the code
 *@nmemb: input 1
 *@size: input 2
 *Return:0 Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
