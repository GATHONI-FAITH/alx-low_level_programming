#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: argc parameter
 * @argv: array of command listed
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
