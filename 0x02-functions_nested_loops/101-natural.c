#include "main.h"
/**
 *main - This is the entry point of the code
 *
 *Return:0 Success
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
