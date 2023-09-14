#include "function_pointers.h"
/**
 *int_index - This is the entry point of the code
 *@array: i
 *@size: drgfdrf
 *@cmp: jksrf
 *Return:0 Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
