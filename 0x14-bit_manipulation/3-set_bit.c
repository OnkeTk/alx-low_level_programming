#include "main.h"

/**
 * set_bit - func that sets the value of a bit to 1 at given index.
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if unsuccessful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s = 1 << index;
	*n = *n | s;
	return (1);
}
