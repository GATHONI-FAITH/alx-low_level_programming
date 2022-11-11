#include <stdio.h>

/**
 * main - prints its name
 * @argc: argc parameter
 * @argv: array of program listed
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv)
{
	printf("%S\n", *argv);
	return (0);
}
