#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always
 *
*/
int main(void)
{
	int n;
	int digit;

	digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit < 6 & digit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
