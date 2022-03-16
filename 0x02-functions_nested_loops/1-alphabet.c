#include "main.h"
/**
 * main - Entry point
 * Description printing alphabet
 * Return: Always 0 (success)
 */
int print_alphabet(void)
{
	int i;

	for (i = "a"; i < "z"; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
