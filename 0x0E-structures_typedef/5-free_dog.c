#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - This is the entry point of the code
 *@d: input
 *Return:0 Success
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
