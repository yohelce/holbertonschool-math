#include "holberton.h"

/**
 * conjugate - returns the conjugate of a given a
 * given complex number 
 * @c: struct
 *
 * Return: complex
 */

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
