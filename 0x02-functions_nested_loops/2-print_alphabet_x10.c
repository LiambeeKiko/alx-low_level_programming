#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowecases ten(10) times
 *
 * Return: 0, success.
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	while(i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		i++;
	}
}
