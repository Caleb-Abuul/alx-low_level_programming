#include "main.h"
/**
* swap_int - swaps the value of one integer for
* another
* @a: first value to be swapped
* @b: second value to be swapped
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
