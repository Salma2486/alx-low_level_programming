#include "main.h"
/**
 *get_bit - This is the entry point of the code
 *@n: lksndfis
 *@index: kuwj
 *Return:0 Success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 0 || index >= 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);

}
