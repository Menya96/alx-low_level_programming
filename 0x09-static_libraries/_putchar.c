#include <unidstd.h>

/**
* _putchar - writes the character c to stdout
* @c: the character to print
*
* Return: 1 on success
*Return : -1 if unsuccesful
*/

int _putchar(char c)
{
    return(write(1, &c, 1));
}
