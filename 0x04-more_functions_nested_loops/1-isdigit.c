#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the character to be checked
 * Return: 1 for digit character or
 * 0 for otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
