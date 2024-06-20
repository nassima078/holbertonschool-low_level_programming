#include <stdio.h>

/**
  * main - prints all numbers of base 16 in lowercase
  * Return: 0
  */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
