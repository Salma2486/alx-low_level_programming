#include "dog.h"
/**
 *init_dog - This is the entry point of the code
 *@d: input 1
 *@name: input 2
 *@age: input 3
 *@owner: input 4
 *Return:0 Success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
