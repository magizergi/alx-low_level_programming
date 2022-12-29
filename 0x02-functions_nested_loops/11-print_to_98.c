#include "main.h"
/**
 *print_to_98 - Entry point
 *@n:start point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int x;
for (x = n; x <= 98; x++)
{
if (x > 9)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
else
_putchar(x + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
