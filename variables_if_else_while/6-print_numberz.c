#include <stdio.h>

/**
  * main - prints all numbers of base 10 starting from 0 without char
  * Return: 0
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
