#include <stdio.h>
/**
* main - prints first 50 fibonacci numbers
* Return: always 0 (success)
*/
int main(void)
{
	unsigned long count, p, q, r;

	p = 0;
	q = 1;
	for (count = 0; count < 50; count++)
	{
		r = p + q;
		p = q;
		q = r;
		printf("%lu", r);
		if (count == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
