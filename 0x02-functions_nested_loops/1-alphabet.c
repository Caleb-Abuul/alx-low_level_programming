#include "main.h"
/**
* main - entry point
* Description: prints the alphabets
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
