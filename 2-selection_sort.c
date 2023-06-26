#include "sort.h"

/**
 * selection_sort - selection sort function
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t j, i, min;
	if (array == NULL || size <= 0)
		exit(EXIT_FAILURE);

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
