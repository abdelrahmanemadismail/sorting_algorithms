#include "sort.h"

/**
 * swap - Swaps the values of two integers.
 *
 * @xp: Pointer to the first integer.
 * @yp: Pointer to the second integer.
 */
void swap(int *xp, int *yp)
{
	int t = *xp;
	*xp = *yp;
	*yp = t;
}

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 *                  Selection sort algorithm.
 *
 * @array: The array to be sorted.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
