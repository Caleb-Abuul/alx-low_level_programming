#include "main.h"
/**
* _abs - prints the absolute value of a number
* @a: the number to be checked
* Return: returns the absokute value of the number
*/
int _abs(int a)
{
	if (a < 0)
	{
		a = a * (-1);
	}
	return (a);
}
