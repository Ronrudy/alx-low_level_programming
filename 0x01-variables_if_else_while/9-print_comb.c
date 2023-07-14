#include <stdio.h>

/**
 * main - a program that prints all possibl
 * e combinations of single-digit numbes
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	if (d != '9')
	putchar(d);
	}
	putchar(',');
	putchar(' ');
	return (0);
}
