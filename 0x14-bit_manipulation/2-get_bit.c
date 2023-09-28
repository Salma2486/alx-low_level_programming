#include "main.h"
/**
 *get_bit - This is the entry point of the code
 *@n: lksndfis
 *@index: kuwj
 *Return:0 Success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	if (index >= 32)
	{
		return (-1);
	}
	i = n >> index;
	return (i & 1);

}
