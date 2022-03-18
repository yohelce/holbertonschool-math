#include "holberton.h"
#include <math.h>

/**
 * power - function power
 * @a: base
 * @n: exponent
 *
 * Return: power
 */

double power(double a, double n)
{
	double pow = a;

	for ( ; n > 1; n--)
		pow = pow * a;
	for ( ; n == 0; )
		return (1);
	return (pow);
}

/**
* modulus - return the modulus
* @c: struct
*
* Return: c
*/

double modulus(complex c)
{
	double mod, a, b;

	a = power(c.re, 2);
	b = power(c.im, 2);
	mod = sqrt(a + b);
	return (mod);
}
