#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer where we search for character
 * @c: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}

