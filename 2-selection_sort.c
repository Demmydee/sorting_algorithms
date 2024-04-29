#include "sort.h"

/**
  * selection_sort - Sorts an array of integers in ascending order
  * using the Selection sort algorithm
  * @array: Array of integers to be sorted
  * @size: Size of the array
  *
  * Return: Nothing
  */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, k = 1, j = 0, min_sz = 0, lim = size - 1;

	if (size < 2)
		return;

	while (i < lim)
	{
		if (k == size)
		{
			if (i != min_sz)
			{
				j = array[i];
				array[i] = array[min_sz];
				array[min_sz] = j;
				print_array(array, size);
			}

			++i;
			min_sz = i;
			k = i + 1;
			continue;
		}

		if (array[min_sz] > array[k])
			min_sz = k;

		++k;
	}
}
