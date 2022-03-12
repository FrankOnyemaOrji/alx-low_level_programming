#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */

int main(void)
{
	char lowerCase;
	char upperCase;

	for (lowerCase = 'A'; lowerCase <= 'Z'; lowerCase++)
	{
		putchar(lowerCase);
	}

	for (upperCase = 'B' upperCase <= 'Y' upperCase++)
	{
		putchar(upperCase);
	}
	
	putchar("\n");

	return (0);
}
