#include <stdio.h>
/**
 *main - Entry point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int main(void)
{
int al;
for (al = 9; al >= 0; al--)
{
putchar('0' + al);
}
putchar('\n');
return (0);
}
