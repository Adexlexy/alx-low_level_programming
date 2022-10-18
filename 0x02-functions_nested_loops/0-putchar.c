#include "main.h"

/**
 * main - Entry point
 * Description: prints the word _putchar, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{

	char alphabet{8} = "_putchar";
	int j;

	for (j = 0, j < 8, j++)
		_putchar(alphabet[j]);
	_putchar('\n');

	return (0);
}

