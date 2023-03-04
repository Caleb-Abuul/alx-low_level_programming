#include <stdio.h>
/**
* main - prints natural numbers that are multi
* ples of 3 and 5.
* Return: always 0 (success)
*/
int main(void)
{
	int n, res;

	for (n = 0; n < 1024; n++)
	{
		if (n % 15 == 0)
		{
			res += 1;
		}
	}
	printf("%d\n", res);
	return (0);
}
