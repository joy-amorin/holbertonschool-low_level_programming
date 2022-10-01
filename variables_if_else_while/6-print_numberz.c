#include <stdio.h>
/**
 *main - prints numbers
 *
 *Return: 0
 */
int main(void)
{
	int n = 0;

	for (; n < 10 ; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
