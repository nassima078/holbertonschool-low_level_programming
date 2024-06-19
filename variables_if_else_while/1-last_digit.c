#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - a random number to the variable n each time it is executed.
*Return = 0
*/
int main(void)
{
int n, last_nomber;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_nomber = n % 10;
if  (last_nomber > 5)
{
	printf("is %d and is greater than 5\n", n, last_nomber);
}
	else if (last_nomber == 0)
{
	printf("is %d and is 0\n", n, last_nomber);
}
	else if (last_nomber < 6 && last_nomber != 0)
{
	printf("is %d and is less than 6 and not 0\n",
		n, last_nomber);
}

	return (0);
}
