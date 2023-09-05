#include "main.h"
#include <stdlib.h>
/**
 *free_grid - This is the entry point of the code
 *@grid: input 1
 *@height: input 2
 *Return:0 Success
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
