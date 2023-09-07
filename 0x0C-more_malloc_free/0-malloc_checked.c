#include "main.h"
#include <stdlib.h>
/**
 **malloc_checked - This is the entry point of the code
 *@b: input
 *Return:0 Success
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
