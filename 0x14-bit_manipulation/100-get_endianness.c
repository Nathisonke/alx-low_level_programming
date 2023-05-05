#include "main.h"

/**
 * get_endianness - Checks if a machine is small or big endian.
 * Return: 0 for small, 1 for big
 *
 **/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
