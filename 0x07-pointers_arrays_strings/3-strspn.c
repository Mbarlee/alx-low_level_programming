#include "main.h"

/**
 * _strspn - locates a character in a string
 * @s: pointer to a char, string that will be checked
 * @accept: pointer to the substring we check for
 *
 * Return: unsigned int, length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
