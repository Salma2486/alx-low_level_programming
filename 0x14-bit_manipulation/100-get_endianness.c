#include "main.h"
/**
 *get_endianness - This is the entry point of the code
 *
 *Return:0 Success
 */
int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
