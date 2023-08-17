#include "main.h"
/**
 *print_triangle - This is the entry point of the code
 *
 *@size: input
 */
void print_triangle(int size)
{
	int a, b, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (space = a + 1; space < size; space++)
			{
				_putchar(' ');
			}
			for (b = 0; b <= a; b++)
					{
					_putchar('#');
					}
		}
		_putchar('\n');
	}
}
