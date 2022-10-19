#include "main.h"
/**
 * print_alphabet - A function that prints the alphabet, in lowercasei
 * followed by a new line
 * Return: nothing
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
