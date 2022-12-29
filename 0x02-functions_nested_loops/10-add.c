#include "main.h"
/**
 *add - Entry point
 *@x :first value
 *@y :second value
 * Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int add(int x, int y)
{
int m;
m = x + y;
if (m > 9)
return ((m / 10) + (m % 10));
else
return (m + '0');
}
