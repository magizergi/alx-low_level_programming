#include "main.h"
/**
 *times_table - Entry point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
void times_table(void)
{
int x, y, m;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
m = x * y;
if (m > 9)
{
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
}
else
{
if (y != 0)
{
_putchar(' ');
}
_putchar(m + '0');
}
if (x != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
