#include "holberton.h"
#include <math.h>

/**
 * argument - returns the argument of a given complex number.
 * @c: struct
 *
 * Return: argument
 */

double argument(complex c)
{
	double arg;

	arg = atan2(c.im, c.re);
	return (arg);
}
