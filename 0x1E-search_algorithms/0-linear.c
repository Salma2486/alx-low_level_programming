#include "search_algos.h"
/**
 *linear_search - This is the entry point of the code
 *@array: serygr
 *@size: srtg srtg
 *@value: esrg se r
 *Return:0 Success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
