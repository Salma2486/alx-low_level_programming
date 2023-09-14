#include "function_pointers.h"
/**
 *array_iterator - This is the entry point of the code
 *@array: input
 *@size: i
 *@action: iusfw
 *Return:0 Success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
