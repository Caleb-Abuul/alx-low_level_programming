#include <stdio.h>
/**
* main - prints the name of command
* Return: always 0 (success)
* @argc: argument count
* @argv: arguement vector)
*/
int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
