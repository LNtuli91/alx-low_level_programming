#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add sum of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - devide two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The div of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
