#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed
 * @argc: arguments counter
 * @argv: arguments array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

