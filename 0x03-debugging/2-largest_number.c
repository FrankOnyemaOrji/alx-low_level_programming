#include "main.h"
/**
 * largest_number - will return the largest numbers of 3
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: will return the largest number
 */

int largest_number(int a, int b, int c)
{
	int larg;

	if (a >= b && a >= c)
	{
		larg = a;
	}
	else if (b >= a && b >= c)
	{
		larg = b;
	}
	else
	{
		larg =c;
	}

	return (larg);
}
