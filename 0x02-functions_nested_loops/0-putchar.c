#include "main.h"

/** 
 * main - Entry point
 *
 * Return: Always 0 (suceess)
 */
int main(void) 
{
	char winners[] = "_putchar";
	int i;

	while (winners[i])
	{
		_putchar(winners[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
