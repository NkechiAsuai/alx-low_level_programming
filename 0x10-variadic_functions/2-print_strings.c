#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (!str)
printf("(nil)");
else
printf("%s", str);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(list);
}
