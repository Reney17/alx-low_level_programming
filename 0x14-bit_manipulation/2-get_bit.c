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
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
