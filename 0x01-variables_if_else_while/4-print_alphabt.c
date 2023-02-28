#include <stdio.h>
/**
* main - entry point
* Description: prints alphabets in lower case except e and q
*
* Return: always 0
*
*/
int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'e' && alphabt != 'q')
		{
			putchar(alphabt);
		}
	}
	putchar('\n');

	return (0);
}
