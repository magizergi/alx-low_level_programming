#include <unistd.h>
/**
 *_strpbrk - writes the character c to stdout
 *@s:character
 *@accept:character
 *Return:Memory
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0 ; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++
}
return('\0');
}
