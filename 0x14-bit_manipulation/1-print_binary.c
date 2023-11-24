#include "main.h"

/**
 *_pow - calculates (base ^ power)
 *@base: base of the exponent
 *@power: power of the exponent
 *
 *Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;

	for (; power > 0; power--)
		result *= base;

	return (result);
}

/**
 *print_binary - prints a number in binary notation
 *@n: number to print
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = _pow(2, sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag || mask == 1)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
