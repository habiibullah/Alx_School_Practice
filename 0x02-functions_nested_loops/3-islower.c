/*
 * File: 3-islower.c
 * Auth: Habiibullah B Ajiboye
 */

#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character  to be checked.
 *
 * Return: If character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >='a' && c <= 'z')
		return (1);
	else
		return (0);
}
