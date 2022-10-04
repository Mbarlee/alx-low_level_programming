#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a matrix using malloc
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: returns a pointer of pointer or null
 */

int **alloc_grid(int width, int height)
{
	int  = 0, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (!arr[i])
		{
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return(arr);
}
