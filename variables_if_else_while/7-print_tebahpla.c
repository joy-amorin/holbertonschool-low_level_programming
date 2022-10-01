#include <stdio.h>
/**
 *main - print alphabets
 *
 *Return: 0
 */
int main(void)
{
	char chars;

	for (chars = 122 ; chars >= 97 ; chars--)
		putchar(chars);
	putchar('\n');

return (0);
}
