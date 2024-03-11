#include "search_algos.h"
/**
 *print_array - This is the entry point of the code
 *@array: srdg srt g
 *@start: rtsh grt h
 *@end: rgsdg srtg k
 *Return:0 Success
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
		else
			printf("\n");
	}
}
/**
 *binary_search - rlktsjgnuljk iowhr
 *@array: rtfh ff - This is the entry point of the code
 *@size: trf hgsrtf
 *@value: rsthsrtg
 *Return:0 Success
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, m;

	if (array == NULL)
		return (-1);
	while (l <= h)
	{
		print_array(array, l, h);
		m = (l + h) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
		{
			h = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return (-1);

}
