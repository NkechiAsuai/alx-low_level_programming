#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
{

printf("%d", va_arg(list, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(list);

printf("\n");
}
