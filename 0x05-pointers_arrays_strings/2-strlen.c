#include "main.h"
/**
* _strlen - prints the length of a string
* @s: pointer to the string
* Return: length of string
*/
int _strlen(char *s)
{
	int n

	n = 0;
	while (*s != '\o')
	{
		n++;
		s++;
	}
	return (n);
}
