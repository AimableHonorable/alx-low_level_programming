#include <stdio.h>
/**
* main - Print all decimals less than 10
* combinations of two digits
* Return: should return zero when successful
*/
int main(void)
{
int i;
int j;

for (i = 48; i < 57; i++)
{
for (j = 0; j < 58; j++) {
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
