#include <stdio.h>
/**
* main - Print all aphabets in lowercase
* and in uppercase
* Return: should return zero when successful
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ++ch)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
}
