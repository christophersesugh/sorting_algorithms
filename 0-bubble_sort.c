#include "sort.h"

/**
 * bubble_sort - implement bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int pass, i, temp, swapped;

	swapped = 1;
	for (pass = size - 1; pass >= 0 && swapped; pass--)
	{
		for (i = 0; i <= pass - 1; i++)
		{
			swapped = 0;
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
			}
		}
	}
}
