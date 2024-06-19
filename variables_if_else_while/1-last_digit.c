#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*The variable n will store a different value every time you run this program
*return = 0
*/
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
	
{
int n, last_nomber;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_nomber= n % 10;  
if  (last_nomber > 5)
{
	printf("Last nomber of %d is  %d and is greater than 5\n",n, last_nomber);
}
	else if (last_nomber == 0)
{
	printf("Last nomber of %d is %d and is 0\n",n, last_nomber);
}
	else if (last_nomber < 6)
{
	printf("Last nomber of %d is %d and is less than 6 and not 0\n",n, last_nomber);
}
	/* your code goes there */
	return (0);
}
