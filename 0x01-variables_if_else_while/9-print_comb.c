#include <stdio.h>
/**
 * main - entry point, prints all possible combinations
 * of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	for (i = '0'; i <= '9'; i++)
	{
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
