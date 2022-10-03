#include "main.h"

/**
 * cap_string - Capitalize all words in a string.
 * @s: The string is capitalized.
 *
 * Return: A pointer to the string that is changed.
 */

char *cap_string(char *s)
{
	int i;
	int before;

	for (i = 0; s[i] != '\0'; i++)
	{
		before = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[before] >= 9 && s[before] <= 10)
				s[i] = s[i] - 32;
			else if (s[before] >= 32 && s[before] <= 34)
				s[i] = s[i] - 32;
			else if (s[before] >= 40 && s[before] <= 41)
				s[i] = s[i] - 32;
			else if (s[before] == 46)
				s[i] = s[i] - 32;
			else if (s[before] == 59)
				s[i] = s[i] - 32;
			else if (s[before] == 123 || s[before] == 125)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
