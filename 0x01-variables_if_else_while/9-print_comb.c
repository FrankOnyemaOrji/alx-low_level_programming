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

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		if (i == 9)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
