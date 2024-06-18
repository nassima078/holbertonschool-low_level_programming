#include<stdio.h>
int main(void) 
	 /** sizeof evaluates the various size of a variable
	  * return:0
	  **/
{
    char charType;
    int intType;
    long int longintType;
    long long int longlongintType;
    float floatType;

    printf("Size of a char: %lu byte(s)\n", sizeof(charType));
    printf("Size of an int: %lu byte(s)\n", sizeof(intType));
    printf("Size of a long int: %lu byte(s)\n", sizeof(longintType));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongintType));
    printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
    
    return (0);
}
