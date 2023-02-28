#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit;
	digit = n % 10;
	if (digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n,digit);	
	else if (digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n,digit);
	}
	else if (digit < 6 & != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not zero\n", n, digit);
	}
	return (0);
}
