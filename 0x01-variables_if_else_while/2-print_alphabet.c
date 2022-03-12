#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main()
{
	char aph;
	for(aph = "A"; aph <= "Z"; aph++)
	{
		aph = tolower(aph);
		putchar(aph);
	}
	return (0);
}
