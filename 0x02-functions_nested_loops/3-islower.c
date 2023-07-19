#include "main.h"

/**
 * _islower - prints 1 if it is in lowecase else prints 0
 * @c : the character to be checked
 * Return: Always 1 for lowercase character else 0.
 i*/

int _islower(int c)

{

	if (c <= 'z' && c >= 'a')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
