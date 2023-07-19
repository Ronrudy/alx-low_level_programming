#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * starting with 1 and 2
 * Return: 0
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%d", j);
	else if (i == 1)
	printf(", %d", k);
	else
	{
	k += j;
	k = k - h;
	printf(", %d", k, i++);
	}
	}
	printf("\n");
	return (0);
}
