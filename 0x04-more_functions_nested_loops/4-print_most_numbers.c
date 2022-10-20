#include "main.h"
 /**
  * print_most_numbers -a function prints the numbers from 0 through 9
  *@: do not print 2 aand 4
  * Return: Always 0
  */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
