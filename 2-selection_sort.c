#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 * Description: Sorts the array in-place in ascending order using
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIdx;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minIdx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIdx])
				minIdx = j;
		}

		if (minIdx != i)
		{
			temp = array[i];
			array[i] = array[minIdx];
			array[minIdx] = temp;
			print_array(array, size);
		}
	}
}
