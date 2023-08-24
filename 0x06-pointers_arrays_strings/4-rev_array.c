#include "main.h"
/**
 *reverse_array - This is the entry point of the code
 *@a: in[ut 1
 *@n: input 2
 *
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
