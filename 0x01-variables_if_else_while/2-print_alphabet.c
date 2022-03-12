#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main()
{
	char alphabet;
	for(alphabet = "A"; alphabet <= "Z"; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
