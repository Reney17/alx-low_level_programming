#include <stdio.h>
#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, x;

	x = n ^ m;
	i = 0;
	for (i = 0; x != 0; i += 1)
		x &= (x - 1);
	return (i);
}
