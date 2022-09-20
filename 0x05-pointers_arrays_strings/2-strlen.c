#include "main.h"
#include <string.h>
/**
* _strlen -> gets length of a string
*@s: string pointer
*Return: returns length of a string
*/
int _strlen(char *s)
{
int len;

while (*s != '\0')
{
len += 1;
*s = *s + 1;
}
return (len);
}
