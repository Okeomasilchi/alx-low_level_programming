#include "main.h"

/**
 * main - entry point of program
 *
 * Return: success
 *
 * _putchar - writes the character c to stdout
 */

void print_numbers(void)
{
	int o;

	char k[] = "0123456789";

	for (o = 0; o < 10; o++)
	{
		_putchar(o[k]);
	}
	_putchar('\n');

	return (0);
}
