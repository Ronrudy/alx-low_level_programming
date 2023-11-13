#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the string to be seached from
 * Return: if a set is found, a pointer to the matched bytes
 * if no set is matched return NULL
 */

char *_strpbrk(char *s, char *accept)

{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
