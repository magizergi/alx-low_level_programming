#include "main.h"
/**
 *_abs - Entry point
 *@n:char that is checked if lower
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (0);
}
else
{
n = n * -1;
return (n);
}
}
