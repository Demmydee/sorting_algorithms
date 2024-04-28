#include "sort.h"

/**
  * bubble_sort - Sorts an array of integers in ascending order
  * using the Bubble sort algorithm
  * @array: Array of integers to be sorted
  * @size: Size of the array
  *
  * Return: Nothing
  */
void bubble_sort(int *array, size_t size)
{
	int i, j, max_sz, swap;

	i = 0, j = 0, max_sz = 0, swap = 1;

	if (!array || size < 2)
		return;

	max_sz = size - 1;

	for (; i < max_sz; ++i)
	{
		if (array[i] > array[i + 1])
		{
			j = array[i];
			array[i] = array[i + 1];
			array[i + 1] = j;
			swap = 1;
			print_array(array, size);
		}

		if (swap == 1 && i == max_sz - 1)
			i = -1, swap = 0, --max_sz;
	}
}
