#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an int.
 * @s: The string is converted.
 *
 * Return: The int value to a string.
 */

int _atoi(char *s)
{
	int hal = 1;
	unsigned int sum = 0;

	do {
		if (*s == '-')
			hal *= -1;
		else if (*s >= '0' && *s <= '9')
			sum = (sum *10) + (*s - '0');
		else if (sum > 0)
			break;
	} while (*s++);
	return (sum * hal);
}

