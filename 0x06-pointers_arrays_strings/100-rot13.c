#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 * Return: encode string
 */
char *rot13(char *str)
{
int e, f;

char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

e = 0;
while (str[e] != '\0')
{
f = 0;
while (alpha[f] != '\0')
{
if (str[e] == alpha[f])
{
str[e] = rot[f];
break;
}
f++;
}
e++;
}
return (str);
}
