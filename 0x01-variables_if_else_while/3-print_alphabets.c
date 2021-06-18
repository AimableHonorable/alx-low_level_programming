#include <stdio.h>
/**
* main - Print all aphabets in lowercase
* and in uppercase
* Return: should return zero when successful
*/
int main(void)
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; ++CH)
        {
                putchar(CH);
        }
	putchar('\n');
	return (0);
}

