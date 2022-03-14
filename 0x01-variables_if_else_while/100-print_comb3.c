#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int comb;
	int combe;

	for (comb = 0; comb <= 9; comb++)
	{
		for ( combe = 0; combe <= 9; combe++)
			{
				if (comb < combe)
				{
					putchar(comb);
					putchar(combe);
					if (comb == 8 && combe == 9)
					{
						break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	putchar('\n');
	return (0);
}
