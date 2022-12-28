#include "main.h"
/**
 *print_last_digit - Entry point
 *@n:char that is checked if lower
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
n = n % 10;
_putchar(n);
return (n);
}
