#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to change the first letter of a word in uppercase
 * Return: capitalizes letters
 */
char *cap_string(char *str)
{
int e;
int f;
char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

e = 0;

while (str[e] != '\0')
{
if (e == 0 && str[e] >= 97 && str[e] <= 122)
{
str[e] = str[e] - 32;
}
f = 0;
while (c[f] != '\0')
{
if (c[f] == str[e] && (str[e + 1] >= 97 && str[e + 1] <= 122))
{
str[e + 1] = str[e + 1] - 32;
}
f++;
}
e++;
}
return (str);
}
