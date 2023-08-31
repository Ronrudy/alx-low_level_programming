#include "main.h"
#include <stddef.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: index of the bit you get
 * @n: number tp check value
 * Return: integer 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
