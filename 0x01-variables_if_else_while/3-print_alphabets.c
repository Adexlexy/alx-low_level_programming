#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and after that uppercase.
 *
 * return: Always 0.
 */
int main(void)
{
	char letter;

	for ('a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'a'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n);

	return (0);
}