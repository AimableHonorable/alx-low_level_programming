#include <stdio.h>
/**
* main - Print all decimals less than 10
* combinations of 3 digits
* Return: should return zero when successful
*/
int main(void)
{
int i, j, k;

for (i = 48; i < 57; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
if (j > i && k > j)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56 || k != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
