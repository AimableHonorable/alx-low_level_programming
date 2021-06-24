#include "holberton.h"

/**
 * print_line - function to print a straight line
 * @n: number of times _ is printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0, i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');

	}
}
