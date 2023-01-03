#include <unistd.h>
/**
 *_strchr - writes the character c to stdout
 *@s:character
 *@c:character
 *Return:Memory
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0 ; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (0);
}
