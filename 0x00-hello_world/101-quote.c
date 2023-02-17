#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints exactly the line ,followed by new line
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
