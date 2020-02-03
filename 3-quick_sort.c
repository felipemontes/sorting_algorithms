#include "sort.h"
/**
 * division - function to remplaze and find the pivot
 * @array: array
 * @low: lowest number
 * @high: highest number
 * @size: size of the array
 * Return: position
 */
int division(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, tmp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > pivot)
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quick_sort_recursion - iterates and swich positions
 * @array: array
 * @high: high numer
 * @low: low number
 * @size: size of the array
 */
void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	int lo;

	if (low < high)
	{
		lo = division(array, low, high, size);
		quick_sort_recursion(array, low, lo - 1, size);
		quick_sort_recursion(array, lo + 1, high, size);
	}

}
/**
 * quick_sort - quick sort algorithm
 * @array: array of ints
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{

	quick_sort_recursion(array, 0, size - 1, size);
}
