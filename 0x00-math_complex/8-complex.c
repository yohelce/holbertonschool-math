#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg - update the real and the imaginary parts of a
 * complex number given its modulus and arguments
 * @m: modulo
 * @arg: agument
 *
 * Return: void
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = cos(arg) * m;
	c3->im = sin(arg) * m;
}
