#include <stdlib.h>
#include <time.h>

/**
 * main - The main function
 * Return: It returns 0
 */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10

	printf("Last digit of %d is %d", n, p);
	if (p > 5)
		printf("and is greater than  5\n");
	else if (p == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n")


	RETURN(0);
}
