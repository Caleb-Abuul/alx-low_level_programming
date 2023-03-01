#include "main.h"
/**
* main - entry point
* Description: prints _putchar
* Return: always 0 (success)
*/
int main(void)
{
	char *p = "_putchar";

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
	return (0);
}
