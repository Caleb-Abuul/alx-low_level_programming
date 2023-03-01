#include <stdio.h>
/**
* main - entry point
* Description: prints numbers
* Return: always 0
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");

	return (0);
}
