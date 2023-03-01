#include "main.h"
/**
* main - entry point
* Description: prints _putchar
* Return: always 0 (success)
*/
int main(void)
{
	char *pc = "_putchar";

	while (*pc)
	{
		putchar(*pc);
		pc++;
	}
	putchar('\n');
	return (0);
}
