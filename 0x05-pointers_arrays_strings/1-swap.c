#include "main.h"
/**
 *swap_int - This is the entry point of the code
 *
 *@a:input 1
 *@b: input 2
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
