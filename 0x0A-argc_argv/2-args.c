#include <stdio.h>

/**
 * main - prints all arguments its receives
 * @argc: argc parameter
 * @argv: array of strings
 * Return: o on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
