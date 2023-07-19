#include "main.h"

/**
 * _abs- computes absolute value of an integer
 * @a : running values
 * Return: success 0.
 */
int _abs(int a)
{

	if (a < 0)
	{
	int abs_val;
	abs_val = a * -1;
	return (abs_val);
	}
	return (a);
}
