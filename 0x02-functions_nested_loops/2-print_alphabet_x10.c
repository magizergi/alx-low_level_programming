#include "main.h"
/**
 *print_alphabet - Entry point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alpha;
int  i;
for (i = 0; i <= 9; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
}
_putchar('\n');
}
