#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character should be checked
 * Return: 1 for uppercase character or
 * 0 for anything otherwise
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 95)
	{
	return (1);
	}
	return (0);
}
