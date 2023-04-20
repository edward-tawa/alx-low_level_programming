#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sums variable number of its arguments
 * @n:  last fixed argument
 * @...: number of paramters to calculate the sum
 *
 * Return: If n == 0 - 0
 *Otherwise - the sum of all parameters
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
