#include "main.h"

/**
 * print_line - draw straight line
 * @n: number of times the character prints
 * Return: 0
 */

void print_line(int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
