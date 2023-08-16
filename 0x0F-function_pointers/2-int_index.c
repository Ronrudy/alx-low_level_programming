#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to the function
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * If no element matches or If size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
