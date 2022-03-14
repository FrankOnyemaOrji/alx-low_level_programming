#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{	
	int comb = '0';

	while (comb <= '9')
	{
		int combe = '0';

		while (combe <= '9')
		{
			if (comb < combe)
			{
				putchar(comb);
				putchar(combe);
				if (comb == '8' && combe == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
