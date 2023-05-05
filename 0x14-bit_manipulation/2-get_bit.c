#include "main.h"

/**
 * 
 * @n: number to search for
 * @index: index of the bit.
 *get_bit - returns the value of a bit at an index in a decimal number.
 *
 * Return: value of a bit
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
