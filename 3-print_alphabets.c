#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char upperCase;
	char lowerCase;

	for (upperCase = "A"; upperCase <= "Z"; upperCase++)
	{
		putchar(upperCase);
	}

	for (lowerCase = "B" lowerCase <= "Y" lowerCase++)
	{
		putchar(lowerCase);
	}
	
	putchar("\n);

	return (0);
}
