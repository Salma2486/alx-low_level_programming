#include "main.h"
/**
 *set_bit - This is the entry point of the code
 *@n: jksfungvikrf
 *@index: ikjodfgnevioe
 *Return:0 Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
	{
		return (-1);
	}
	i = 1 << index;
	return (*n | i);

}
