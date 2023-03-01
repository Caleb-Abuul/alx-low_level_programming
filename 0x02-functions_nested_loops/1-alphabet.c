#include "main.h"
/**
* main - entry point
* Description: prints the alphabets
* Return: Always 0 (success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
