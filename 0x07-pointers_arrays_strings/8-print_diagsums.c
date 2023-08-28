#include <stdio.h>
#include "main.h"
/**
 *print_diagsums - This is the entry point of the code
 *
 *@a: input 1
 *@size: input 2
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
