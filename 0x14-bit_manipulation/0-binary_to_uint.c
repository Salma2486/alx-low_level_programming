#include "main.h"
/**
 *binary_to_uint - This is the entry point of the code
 *@b: oidfngvodi
 *Return:0 Success
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j;
	int sum = 0;

	if (b == NULL)
	{
		return 0;
	}
	for (j = (strlen(b) - 1); j > 0; j--)
	{
		if (b[j] == '0' || b[j] == '1')
		{
			sum += (b[j] - '0') * (1 << i);
			i++;
		}
		else
			return (0);
	}
	return (sum);
}
