#include <stdio.h>
#include <time.h>

/**
 * main - entry Point
 * Return: Alway 0 (Success/correct)
 */
/* Function -  loops throught the code to return postive, negative and zero number*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n < 0)

	{

		printf("%i Number is Negative",n);
	}

	else if 
		(n == 0)

		{
			printf("%i Number is Zero\n",n);
		}

	else 

		{
			printf("%i Number is Positive\n",n);
		}
	return 0;
}

