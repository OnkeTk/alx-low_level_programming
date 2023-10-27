#include "main.h"

/**
 * get_endianness - func that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int s;
	char *b;

	s = 1;
	b = (char *)&s;
	return (*b);
}
