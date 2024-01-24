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
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               Bubble sort algorithm.
 *
 * @array: The array to be sorted.
 * @size: Number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	char s;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		s = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				s = 1;
			}
		}
		if (s == 0)
			break;
	}
}
