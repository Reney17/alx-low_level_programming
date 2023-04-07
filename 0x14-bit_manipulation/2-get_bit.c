#include <stdio.h>
#include "main.h"

/**
*get_bit - get the value of a bit
*@n: the number
*@index: index starting from 0 of the bit needed
*
*return: value converted
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	k <<= index;

	return ((n & k) ? 1 : 0);
}
