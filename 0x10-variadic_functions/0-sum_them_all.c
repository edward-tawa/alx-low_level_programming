#include "variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all - function that sums variable number of its arguments
 * @n:  last fixed argument
 * @...: number of paramters to calculate the sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int sum = 0;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
