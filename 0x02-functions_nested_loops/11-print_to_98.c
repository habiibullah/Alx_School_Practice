/*
 * File: 11-print_to_98.c
 */

#include <stdio.h>

/**
 * print_to_98 - Prints all natural number from input to 98,
 *               in order separated by comma.
 * @n: The number to begin counting at.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d\n", n--);
		printf("%d\n", n);

	}
	else
	{
		while (n < 98)
			printf("%d\n", n++);
		printf("%d\n", n);
	}
			
}
