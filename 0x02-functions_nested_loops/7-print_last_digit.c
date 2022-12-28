#include "main.h"
/**
 *print_last_digit - Entry point
 *@n:char that is checked if lower
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (n < 0)
{
last = last * -1;
_putchar(last + '0');
return (last);
}
}
