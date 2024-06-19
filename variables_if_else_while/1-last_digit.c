#include <stdio.h>
#include <time.h>
/*The variable n will store a different value every time you run this program
*return = 0
*/
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if  (n > 5)
printf("%d Last digit of 491506926 is 6 and is greater than 5\n", n);
else if (n == 0)
printf("%d Last digit of 809065140 is 0 and is 0\n", n);
else if (n < 6)
printf("%d Last digit of -1052791662 is -2 and is less than 6 and not 0\n", n);

	/* your code goes there */
	return (0);
}
