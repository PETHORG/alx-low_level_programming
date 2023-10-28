#include "main.h"


int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid_mem;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid_mem = malloc(sizeof(int *) * height);

	if (grid_mem == NULL)
	{
		free(grid_mem);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{

		grid_mem[i] = malloc(sizeof(int) * width);
		if (grid_mem[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(grid_mem[i]);
			}
			free(grid_mem);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			grid_mem[i][j] = 0;
		}
	}

	return (grid_mem);
}
