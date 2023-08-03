#include "main.h"

/**
 * prime_a - calculate if its a prime number
 * @a: input
 * @b: divisor
 * Return: 1 for prime number 0 for composite number
 */

int prime_a(int a, int b)

{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}

	if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - returns if prime number
 * @n: input number
 * Return: 1 or 0
 */

int is_prime_number(int n)

{
	return (prime_a(n, 2));
}
