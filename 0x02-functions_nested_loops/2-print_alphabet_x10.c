#include"main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (lettter = 'a'; letter <= 'z'; letter++)
			_put char (letter);
		_putchar('\n');
	}
}


