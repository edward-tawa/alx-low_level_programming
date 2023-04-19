#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns difference of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns product of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function for  division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that returns the remainder of the division of a and b.
 * @a: first number.
 * @b: second number.
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}

