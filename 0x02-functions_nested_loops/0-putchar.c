#include "main.h"

/** 
 * main - Entry point
 *
 * Return: Always 0 (suceess)
 */
int main (void) 
{
	char winners[8] = {'_','p','u','t','c','h','a','r'};
	int i = 0;

	while(i < 9)
	{
		_putchar(winners[8]);
		i++;
	}

	_putchar('\n');
	return (0);
}
