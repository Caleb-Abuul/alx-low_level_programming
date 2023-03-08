#include "main.h"
/**
* _puts_recursion - prints a string followed by a
* new line
* @s: pointer to the string to be printed
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar("%c", *s);
	_puts_recursion(++s);
}
