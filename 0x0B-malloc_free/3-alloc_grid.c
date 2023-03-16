#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim, array
*/
int **alloc_grid(int width, int height)
{
	int mee;
	int x;

	if (width <= 0 || height <= 0)
		return (0);

	mee = malloc(sizeof(0) * height);

	if (mee == 0)
		return (0);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == 0)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (0);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (x = 0; x < height; x++)
			mee[x][y] = 0;
	}
	return (mee);
}
