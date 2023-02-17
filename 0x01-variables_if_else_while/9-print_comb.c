#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0(Succes)
 */
int main(void)
{
	int sing;

	for (sing = '0'; sing <= '9'; sing++)
	{
		putchar(sing);
		if (sing != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
