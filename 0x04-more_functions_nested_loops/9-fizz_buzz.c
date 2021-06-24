#include <stdio.h>

/**
 * main - function to print fizz buzz at multiple of 3
 * in a sequence of numbers from 1 to 100
 * Return: should be 0 on success
 */

int main(void)
{
	int i;

	i = 1;
	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 !=0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");

	return (0);
}
