#include <stdio.h>
/**
* main - entry point
* Description: prints alphabets in reverse order
* Return: always 0
*/
int main(void)
{
	char tebahpla;

	for (tebahpla = 'z'; tebahpla >= 'a'; tebahpla--)
	{
		putchar(tebahpla);
	}
	putchar('\n');

	return (0);
}
