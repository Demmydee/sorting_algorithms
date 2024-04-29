#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: Array of integers to be sorted
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, i, inn;
	int val;

	interval = 1;

	if (array == NULL || size < 2)
		return;
	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			/* insert value */
			val = array[i];
			inn = i;

			/*align elements to the right*/
			while (inn > interval - 1 && array[inn - interval] >= val)
			{
				array[inn] = array[inn - interval];
				inn = inn - interval;
			}

			array[inn] = val;
		}
		print_array(array, size);
		interval = (interval - 1) / 3;
	}
}
