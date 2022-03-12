#include <stdio.h>
/**
 * main - entry point, prints all possible combinations
 * of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 47; i <= 57; i++)
	{
		if (i == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
