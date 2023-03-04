#include <stdio.h>
/**
* main - even fibonacci numbers
* Return: always 0 (success)
*/
int main(void)
{
	unsigned long count, p, q, r, sums;

	p = sums = 0;
	q = 1;
	for (count = 0; count < 50; count++)
	{
		r = p + q;
		p = q;
		q = r;
		if (r % 2 == 0 && r < 4000000)
		{
			sums += r;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
