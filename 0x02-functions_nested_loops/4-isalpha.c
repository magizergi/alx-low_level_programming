#include "main.h"
/**
 *_islower - Entry point
 *@c:char that is checked if lower
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int _islower(int c)
{
if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
{
return (1);
}
else
{
return (0);
}
}
