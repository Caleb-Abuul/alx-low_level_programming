#include "main.h"
/**
* _islower - checks whether a character is in lower case or not
*  @c: character to be checked
*  Return: 1 if lower case or 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
