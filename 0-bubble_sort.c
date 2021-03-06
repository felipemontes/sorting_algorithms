#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array of numbers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	size_t tmp = 0;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}

	}
}
