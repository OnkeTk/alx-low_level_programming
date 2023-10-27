#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int countbit = o;
	unsigned long int s;
	unsigned long int t = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		s = t >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
