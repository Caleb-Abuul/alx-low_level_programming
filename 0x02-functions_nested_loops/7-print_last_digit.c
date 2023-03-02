#include "main.h"
/**
* print_last_digit - prints the last digit
* @n: number to print its last digit
* Return: the last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
