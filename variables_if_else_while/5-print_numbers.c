#include <stdio.h>

/**
  * main - prints all numbers of base 10 starting from 0
  * Return: 0
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
