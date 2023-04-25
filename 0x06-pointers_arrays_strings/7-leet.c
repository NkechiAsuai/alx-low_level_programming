#include "main.h"
/**
 * leet - encodes a string
 * @str: the string to encode
 * Return: the encode string
 */
char *leet(char *str)
{
int e, f;
char c[] = "aAeEoOtTlL";
char n[] = "4433007711";

e = 0;
while (str[e] != '\0')
{
f = 0;
while (c[f] != '\0')
{
if (str[e] == c[f])
{
str[e] = n[f];
}
f++;
}
e++;
}
return (str);
}
