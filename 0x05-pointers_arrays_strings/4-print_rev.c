#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string pointed to, to be printed
*/
void print_rev(char *s)
{
	int i, j, len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
