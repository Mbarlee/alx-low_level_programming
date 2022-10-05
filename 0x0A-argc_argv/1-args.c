#include "main.h"
#include <stdio.h>

/**
 * main - prints the no. of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
