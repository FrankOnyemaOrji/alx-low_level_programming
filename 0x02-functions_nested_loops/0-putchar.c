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
	
	for (i = 0; i < 8; i++)
	{
		_putchar(winners[i]);
	}
	_putchar('\n');
	return (0);
}
