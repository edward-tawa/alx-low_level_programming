#include "main.h"

int actual_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns square root of a number
 * @n: input number
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt(n, 0));
}
/**
 * actual_sqrt - finds the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return:  square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}

