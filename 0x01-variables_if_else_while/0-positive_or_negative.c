#include <stdlib.h>
#include <time.h>
/**
 * more headers goes there
 * betty style doc for function main goes there
 * main - prints a negative or positive int
 *
 * Retrun: always 
 *
*/ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);	
	return (0);
}
