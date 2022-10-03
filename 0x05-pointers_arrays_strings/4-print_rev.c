#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse order
 * @s: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
		int y = 0;

		while (s[y] != '\0')
		{
			y++;
		}

		for (y = y - 1; y >= 0; y--)
		{
			putchar(s[y]);
		}
		putchar('\n');
}

