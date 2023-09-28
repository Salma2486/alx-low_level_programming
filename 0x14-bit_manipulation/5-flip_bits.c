#include "main.h"
/**
 *flip_bits - This is the entry point of the code
 *@n: lskngifvler
 *@m: ureoged
 *Return:0 Success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
