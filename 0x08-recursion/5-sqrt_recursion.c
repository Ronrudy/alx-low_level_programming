#include "main.h"

/**
 * sqrt_a - calculates natural square root
 * @b: iterate number
 * @a: square root number
 * Return: natural aquare root
 */

int sqrt_a(int a, int b)

{
	if (b * b > a)
	{
		return (-1);
	}
	if (b * b == a)
	{
		return (b);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)

{
	return (sqrt_a(n, 0));
}
