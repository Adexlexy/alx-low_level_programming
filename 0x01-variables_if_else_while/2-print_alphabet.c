#include <stdio.h>
#include <stdlib.h>
#include <time>
/**
 *main - Entry point
 *Description - Print all alphabet
 *Return : Always 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	putchar('\n');
	return (0);
}
