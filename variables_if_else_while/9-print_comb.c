#include <stdio.h>
/**
 *main - prints all posibble combinations of single-digit
 *
 *Return: 0
 */
int main(void)
{
	int n = '0';

	for (; n <= '9' ; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
