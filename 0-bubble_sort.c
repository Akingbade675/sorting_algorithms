#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order 
 * using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp = 0;

	for (i = 0; i < (int)size - 1; i++)
	{
		for (j = 0; j < (int)size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				tmp = 1;

				print_array(array, size);
			}
		}

		if (tmp == 0)
			return;
	}
}
