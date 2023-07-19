#include "main.h"

/**
 * print_sign - prototype to print sign of number
 * @n : value to be checked
 * Return: 1 for positive number else zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
