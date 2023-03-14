#include <stdlib.h>
/**
 * alloc_grid - desc
 * @width: w
 * @height: h
 * Return: ptr to ptr
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	res = malloc(sizeof(int *) * width);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < width; i++){
		res[i] = malloc(sizeof(int) * height);
		if (res[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			res[j][i] = 0;
	return (res);
}
