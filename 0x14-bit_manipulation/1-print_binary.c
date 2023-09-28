#include "main.h"
/**
 *print_binary - This is the entry point of the code
 *@n: diogdji
 *Return:0 Success
 */
void print_binary(unsigned long int n)
{
	unsigned long int j;

	if (n == 0)
	{
		printf("0");
		return;
	}
	j = n >> 1;
	print_binary(n >> 1);
	if (n == (j * 2))
		printf("0");
	else
		printf("1");
	n = j;
}
