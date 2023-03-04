#include "main.h"
/**
* print_times_table - prints the multiplication
* times table
* @n: number to be used in printing the times
* table
* Return: returns nothing
*/
void print_times_table(int n)
{
	int p, q, result;

	if (!(n > 15 && n < 0))
	{
		for (p = 0; p <= n; p++)
		{
			for (q = 0; q <= n; q++)
			{
				result = p * q;
				if (q != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (result < 10 && q != 0)
				{
					_putchar(' ');
					_putchar(" ");
					_putchar((result % 10) + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
