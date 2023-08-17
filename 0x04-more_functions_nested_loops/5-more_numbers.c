#include "main.h"
/**
 *more_numbers - This is the entry point of the code
 *
 */
void more_numbers(void)
{
	int i, j, a;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			a = j;
			if (j >= 10)
			{
				_putchar(1 + 48);
				a = j % 10;
			}
			_putchar(a + 48);
		}
		_putchar('\n');
	}
}
