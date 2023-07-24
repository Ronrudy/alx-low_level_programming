#include "main.h"

/**
 * int _strlen - a function that returns the length of a string.
 * @s: string to be checked
 * Return: lenght of the string
 */

int _strlen(char *s)

{
	int string_lenght = 0;

	while (s[string_lenght])
		string_lenght++;
	return (string_lenght);
}
