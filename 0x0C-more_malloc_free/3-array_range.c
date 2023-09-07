#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **array_range - This is the entry point of the code
 *@min: inout 1
 *@max: input 2
 *
 *Return:0 Success
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
