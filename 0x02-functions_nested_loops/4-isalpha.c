#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lower or uppercase
 * @c: The int to print
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
