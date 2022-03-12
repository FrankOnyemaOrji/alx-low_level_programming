#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char base16;

	for (base16 = 48; base16 <= 57; base16++)
	{
		putchar(base16);
	}
	for (base16 = 58; base16 <= 67; base16++)
	{
		putchar(base16);
	}

	putchar('\n');
	return (0);
}
