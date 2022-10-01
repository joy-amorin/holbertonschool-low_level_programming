/**
 *main - print de alphabet in lowercase except q and e
 *
 *Return: 0
 */
int main(void)
{
	char chars;

	for (chars = 97 ; chars <= 122 ; chars++)

		{
			if (chars != 101 && chars != 113)
				putchar(chars);
		}
		putchar('\n');
		return (0);
}
