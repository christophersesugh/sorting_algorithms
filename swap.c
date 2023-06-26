#include "sort.h"

/**
 * swap - swaps two variables
 * @a: first variables
 * @b: second variable
 * Return: nothing
 */
void swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
