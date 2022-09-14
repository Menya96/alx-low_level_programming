#include "main.h"

/**
* _isalpha - function that checks for alphabetic character
* @c: char type letter
* Return: return 0 if successful and 1 if failed
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
