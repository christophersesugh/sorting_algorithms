#include "sort.h"

/**
 * lomutoPartition - function to perform partition using lomuto scheme
 * @array: array to be partitioned
 * @low: lower partition
 * @high: high partition
 * Return: int
 */
int lomutoPartition(int *array, int low, int high)
{
	int i, j, pivot;

	pivot = array[high];
	i = low - 1;
	
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quick_sort - implements the quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	int low, high, pivot_index;

	if (array == NULL || size <= 0)
		exit(EXIT_FAILURE);

	low = 0;
	high = size - 1;
	pivot_index = lomutoPartition(array, high, low);

	quick_sort(array, pivot_index);
	quick_sort(array + pivot_index + 1, size - pivot_index - 1);
}
