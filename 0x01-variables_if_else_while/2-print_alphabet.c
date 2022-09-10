/*
 * File: 2-print_alphabet.c
 * Auth: Habiibullah B Ajiboye
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
