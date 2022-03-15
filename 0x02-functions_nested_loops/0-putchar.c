#include "main.h"

/** 
 * main - Entry point
 *
 * Return: Always 0 (suceess)
 */
int main(void) 
{
	char winners[9]  = "_putchar";
	int i;

	for (i = 0;i < 9; i++)
	{
		_putchar(winners[i]);
	}
	_putchar('\n');
	return (0);
}
