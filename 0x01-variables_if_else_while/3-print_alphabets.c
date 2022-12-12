#include <stdio.h>
/**
 *main - Entry point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int main(void)
{
char al;
for (al = 'a'; al <= 'z'; al++)
{
putchar(al);
}
char capital;
for (capital = 'A'; capital <= 'Z'; capital++)
{
putchar(capital);
}
putchar('\n');
return (0);
}
