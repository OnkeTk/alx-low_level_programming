#include "main.h"

/**
 * binary_to_uint - a program that converts binary numbers
 * to integers/decimal numbers
 *
 * @b: a character pointer to a string containing the
 * binary numbers
 *
 * Return: the converted decimal (output)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
       size_t x;
      size_t y;
     size_t sum;
    size_t pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		for (y = len - 1; y > 0; y--)
			pow = pow * base;
		sum = sum + (pow * (b[x] - 48));
		len--;
		pow = 1;
	}

	return (sum);
}
