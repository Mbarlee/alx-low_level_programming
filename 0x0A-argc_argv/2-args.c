#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments passed on to it followed by newline
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
