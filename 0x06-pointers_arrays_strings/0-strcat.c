#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)

{
	int lenght_of_string, i;
	lenght_of_string = 0;

	while (dest[lenght_of_string] != '\0')
	{
	lenght_of_string++;
	}
	for (i = 0; src[i] != '\0'; i++, lenght_of_string++)
	{
	dest[lenght_of_string] = src[i];
	}
	dest[lenght_of_string] = '\0';
	return (dest);
}
