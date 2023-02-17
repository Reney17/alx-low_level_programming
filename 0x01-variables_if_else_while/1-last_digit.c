#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - to generate a random number
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
	{
		printf("Last digit of %d and %d and is greater than 5\n", n, lastNum);
	}
	else if (lastNum == 0)
	{
		printf("Last digit of %d and %d and is 0\n", n, lastNum);
	}
	else
	{
		printf("Last digit of %d and %d and is less than 6 and 0\n", n, lastNum);
	}

	return (0);
}
