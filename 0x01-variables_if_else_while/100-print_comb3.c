#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int comb;

	for(comb = 1; comb <= 100; comb++)
	{
		putchar(comb);
		putchar(',');
		putchar(' ');

		if (comb == 10)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
