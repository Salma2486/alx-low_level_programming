#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **_realloc - This is the entry point of the code
 *@ptr: input 1
 *@old_size: input 2
 *@new_size: input 3
 *Return:0 Success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
