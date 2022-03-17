#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers
 * @c: struct
 *
 * Return: void
 */

void display_complex_number(complex c)
{
	if (c.re && c.im)
	{
		if (c.im > 0)
			printf("%d + %di\n", c.re, c.im);
		if (c.im == 0)
			printf("%d\n", c.re);
		if (c.im < 0)
			printf("%d - %di\n", c.re, -(c.im));
	}
	else if (c.re && c.im == '\0')
		printf("%d\n", c.re);
	else if (c.re == '\0' && c.im)
	{
		if (c.im > 0)
			printf("%di\n", c.im);
		if (c.im == 0)
			printf("%d\n", c.im);
		if (c.im < 0)
			printf("-%di\n", -(c.im));
	}
	if (!c.re && !c.im)
		printf("%d\n", 0);
}
