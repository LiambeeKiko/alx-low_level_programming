#include "main.h"

/**
 * print_last_digit - to print last digit
 * @a : tested value
 * Return: value of the last digit of numbers
 */
int print_last_digit(int x)
{
	int y = x % 10;

	if (x < 0)
		y = y * -1;
	_putchar(y + '0');
	return (y);
}
