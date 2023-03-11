#include <stdio.h>
/**
* main - prints the number of argument counts
* @argc: argument count
* @argv: argument vector
* Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
