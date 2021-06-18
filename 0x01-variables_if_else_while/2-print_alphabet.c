#include <stdio.h>
/**
* main - Print all aphabets in small letters
* Return: should return zero when successful
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
