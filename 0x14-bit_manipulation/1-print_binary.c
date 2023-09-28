#include "main.h"
/**
 *print_binary - This is the entry point of the code
 *@n: diogdji
 *Return:0 Success
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n >> 0)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
		}
		i = (n & 1);
		printf("%d", i);
	}
	else
	{
		printf("0");
	}
}
