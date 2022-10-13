#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %Id byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %Id byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %Id byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %Id byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %Id byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
