#include <unistd.h>
/**
 *_strspn - writes the character c to stdout
 *@s:character
 *@accept:character
 *Return:Memory
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int counter = 0;
while (*s)
{
for (i = 0 ; accept[i]; i++)
{
if (*s == accept[i])
{
counter++;
break;
}
else if (accept[i + 1] == '\0')
return (counter);
}
s++;
}
return (counter);
}
