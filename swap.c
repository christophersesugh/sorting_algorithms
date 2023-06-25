#include "sort.h"

/**
 * swap - swap the values of two variables
 * @a: first variable
 * @b: second variable
 * Return: nothing
 */
int swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
	return (temp);
}
