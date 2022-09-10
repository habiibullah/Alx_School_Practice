/*
 * File: 4-print_alphabt.c
 * Auth: Habiibullah B Ajiboye
 */

#include <stdio.h>

/**
 * main: Prints the alphabet in lowercase, excerpt for q and e.
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
			
}
