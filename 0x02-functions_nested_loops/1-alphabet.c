#include "main.h"
/**
 * print_Alphabet - Entry point
 * Description: print lowercase alphabet
 * Return:  void (success)
 */

void  print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
