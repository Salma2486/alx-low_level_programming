#include "main.h"
/**
 *clear_bit - This is the entry point of the code
 *@n: ijngrfioergfve
 *@index: lrkejgvnkjr
 *Return:0 Success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
