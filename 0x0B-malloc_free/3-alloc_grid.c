#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **arr_grid;
	int i, j;

	if (width <= 0 || height <= 0) /* validate input */
		return (NULL);

	arr_grid = malloc(height * sizeof(int *)); /*allocate memory for rows*/

	if (arr_grid == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < height; i++) /*allocate memory for columns of each row*/
	{
		arr_grid[i] = malloc(width * sizeof(int));
		if (arr_grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr_grid[i]);
			free(arr_grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr_grid[i][j] = 0;
	}

	return (arr_grid);
}
