#include <stdio.h>

/**
 * main - Prints numbers 1 to 100
 * multiples of 3 prints Fizz
 * multiples of 5 prints Buzz
 * multiples of 3 and 5 prints FizzBuzz
 * Return: 0
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
