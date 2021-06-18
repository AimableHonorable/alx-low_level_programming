#include <stdio.h>
/**
* main - Print all decimals less than 10 combinations
* Return: should return zero when successful
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
