#include "holberton.h"

/**
 * print_numbers - function to print numbers from 0 to 9
 * Return: should return 0 on success
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
