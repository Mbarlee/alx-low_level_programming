#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to finid
 * Return: char value
 */

char *_strstr(char *haystack, char *needle)
{
	char *scanned = haystack;
	char *sub = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (scanned);
		}
		needle = sub;
		scanned++;
		haystack = scanned;
	}
	return (0);
}
