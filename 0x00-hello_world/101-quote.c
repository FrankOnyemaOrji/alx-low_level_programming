#include <stdio.h>
#include <unistd.h>

/**
 * main - this should print "and that piece of art is useful"
 * - Dora korpar, 2015-10-19,
 *   followed by a new line, to the standard.
 *   return: Always return 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpa, 2015-10-19\n", 59);
	return (1);
}
