#include "main.h"
/**
* _strlen -> function to swap two numbers
* @s:value to be swaped
* return 0
* error -1
*/
int _strlen(char *s)
{
int len = 0;
while (*s == "/0")
{
len = len + 1;
*s = *s + 1;
}
return (len);
}
