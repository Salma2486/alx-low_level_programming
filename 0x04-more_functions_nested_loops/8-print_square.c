#include "main.h"
/**
 *print_square - This is the entry point of the code
 *
 *@size: input
 */
void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
