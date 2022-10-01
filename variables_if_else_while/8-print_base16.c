#include <stdio.h>
/**
 *main - prints numbers
 *
 *Return: 0
 */
int main(void)
{
	int n = '0';
	char chars;

	for (; n <= '9' ; n++)
		putchar(n);
	for (chars = 97 ; chars <= 102 ; chars++)
		putchar(chars);
	putchar('\n');
	return (0);
}
