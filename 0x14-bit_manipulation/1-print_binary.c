#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the input
 * @power: power of the input
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int s;

	num = 1;
	for (s = 1; s <= power; s++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints out binary
 * @n: decimal to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor;
	unsigned long int check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
