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
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
