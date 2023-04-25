#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @str: the string to change
 * Return: the string that change for uppercase
 */
char *string_toupper(char *str)
{
int e;

e = 0;

while (str[e] != '\0')
{
if (str[e] >= 97 && str[e] <= 122)
{
str[e] = str[e] - 32;
}
e++;
}
return (str);
}
