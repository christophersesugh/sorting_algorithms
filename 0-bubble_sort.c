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

	swapped = 1;
	for (i = 0; i <= size - 1 && swapped; i++)
	{
		for (j = 0; i <= size - i - 1; i++)
		{
			swapped = 0;
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
			}
		}
	}
}
