#include<stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that sums variable number of its arguments
 * @n:  last fixed argument
 * @...: number of paramters to calculate the sum
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	var_list ptr;

	var_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += var_arg(ptr, unsigned int);
	}
	var_end(ptr);
	return (sum);
}
