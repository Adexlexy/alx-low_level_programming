#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point to print the alphabet in lowercase except
 * for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter == 'q' || letter == 'e')
			continue;
				putchar(low);
	putchar('\n');
	return (0);
}
