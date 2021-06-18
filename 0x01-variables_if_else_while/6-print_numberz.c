#include <stdio.h>
/**
* main - Print all decimals less than 10
* startingfrom zero and use putchar
* Return: should return zero when successful
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
