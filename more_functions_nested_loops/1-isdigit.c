#include "main.h"

/**
*_isupper - function that checks for a digit (0 through 9)
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)

{

	if ((c >= '0') && (c <= '9'))
	return (1);

	return (0);
}
