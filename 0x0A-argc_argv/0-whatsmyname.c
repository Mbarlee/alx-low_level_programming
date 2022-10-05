#include "main.h"
#include <stdio.h>

/**
 * main -> this is a function to print its name
 * 
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0(success)
 */
int main(int argc __atribute__((unused)), char *argv[])
{
	printf("%s\n",  *argv[0]);
	return (0);
}
