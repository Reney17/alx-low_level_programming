#include <stdio.h>

/**
 * main - entry point
 * Description: prints number of command line arguements
 * @argc: number of arguements
 * @argv: array of arguemnts
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
		printf("%d\n", argc - 1);
		return (0);
}
