#include "main.h"
/**
* print_last_digit - prints the last digit
* @num: number to print its last digit
* Return: the last digit
*/
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * (-1);
	}
	_putchar((num % 10) + '0');
	return (num % 10);
}
