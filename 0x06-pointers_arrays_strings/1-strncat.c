#include "main.h"

/**
 * _strncat - concatenates two strings using
 * an inputted number of bytes from src
 * @dest: String to be appeneded
 * @src: String to be appended to dest
 * @n: Number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int level = 0, dest_len = 0;

	while (dest[level++])
		dest_len++;

	for (level = 0; src[level] && level < n; level++)
		dest[dest_len++] = src[level];

	return (dest);
}
