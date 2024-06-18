#include<stdio.h>
int main() {
    char charType;
    int intType;
    long int longintType;
    long long int longlongintType;
    float floatType;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %lu bytes\n", sizeof(charType));
    printf("Size of an int: %lu bytes\n", sizeof(intType));
    printf("Size of a long int: %lu bytes\n", sizeof(longintType));
    printf("Size of a long long int: %lu byte\n", sizeof(longlongintType));
    printf("Size of a float:%lu byte\n", sizeof(floatType));
    
    return (0);
}
