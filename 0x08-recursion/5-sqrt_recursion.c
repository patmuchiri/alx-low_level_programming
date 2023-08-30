#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: integer identifier
 *  Return: square root of number, -1 if n is negative
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_recursive(n, 0));
}

/**
 * sqrt_recursive - auxiliary function to find the square root recursively
 * @n: integer whose square root is to be calculated
 * @guess: current guess for the square root
 * Return: square root of number, or -1 if no natural square root
 */

int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}

	return (sqrt_recursive(n, guess + 1));
}
