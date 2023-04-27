#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calclates sum of all its parameters
 * @n: number of arguments passed
 *
 * Return: sum of all its parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list list;

if (n == 0)
return (0);

va_start(list, n);
for (i = 0; i < n; i++)
sum = sum + va_arg(list, int);

va_end(list);
return (sum);
}
