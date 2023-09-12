#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase English alphabet
 * from 'a' to 'z' ten times,
 * with each set of letters separated by a newline character.
 * Return: void
 */

void print_alphabet_x10(void)

{

char c;
int i = 0;

while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}

}
