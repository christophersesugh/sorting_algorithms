#include "sort.h"

/**
 * bubble_sort - implement bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int pass, i, temp;

	for (pass = size - 1; pass >= 0; pass--)
	{
		for (i = 0; i <= pass - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}
