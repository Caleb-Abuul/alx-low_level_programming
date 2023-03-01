#include <stdio.h>
/**
* main - entry point
* Description: prints a combination of numbers
* Return: always 0
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
		{
			continue;
		}
		putchar(',');
		putchaf(' ');
	}
	putchar('\n');

	return (0);
}
