#include <stdio.h>
/**
* main - main entry
*
* Description: prints lowercase alphabets
*
* Return: always 0
*
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
