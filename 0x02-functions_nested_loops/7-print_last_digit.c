#include "main.h"

/**
 * print_last_digit - to print last digit
 * @a : tested value
 * Return: value of the last digit of numbers
 */
int print_last_digit(int x)

{

	int last;

	last = x % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
