#include "sort.h"

/**
 * bubble_sort - implement bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp, swapped;

	if (array == NULL || size <= 0)
		exit(EXIT_FAILURE);

	swapped = 1;
	for (i = size - 1; i >= 0 && swapped; i--)
	{
		swapped = 0;
		for (j = 0; j <=  i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
