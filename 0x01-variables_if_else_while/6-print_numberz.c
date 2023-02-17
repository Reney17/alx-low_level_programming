#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig;

	for (dig = '0'; dig <= '9'; dig++)
	{
		putchar(dig);
	}
	putchar('\n');
	return (0);
}
