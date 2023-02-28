#include <stdio.h>
/**
 * main - prints lowercase and uppercase alphabets
 *
 * Return: always 
 *
 */
int main(void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar(alphabets);
	return (0);
}
