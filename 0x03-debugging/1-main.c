#include <stdio.h>
/**
* main - main file causes an infint loop
* Return: Always 0
*/
int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	/*
	 * while (i < 10)
	 * {
	 * infinite loop-No increase of variables
	 * putchar(i);
	 * }
	 */
	printf("infinite loop avoided! \\o\/\n");

	return (0);
}