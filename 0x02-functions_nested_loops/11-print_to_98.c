#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function to print from a given number to 98
 */

void print_to_98(int n)
{
	if(n <=98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}

	if (n >= 98)
	{
		while (n >= 98)
        	{
	                printf("%d, ", n);
                	n--;
        	}
        	printf("\n");
	}
}
