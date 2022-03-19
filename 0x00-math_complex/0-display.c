#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers
 * @c: struct
 *
 * Return: void
 */

void display_complex_number(complex c)
{
	if (c.re != 0 && c.im != 0)
	{
		if (c.im > 0)
		{
			if (c.im != 1)
				printf("%g + %gi\n", c.re, c.im);
			else
				printf("%g + i\n", c.re);
		}
		if (c.im < 0)
		{
			if (c.im != -1)
				printf("%g - %gi\n", c.re, -(c.im));
			else
				printf("%g - i\n", c.re);
		}
	}
	else if (c.re && c.im == 0)
		printf("%g\n", c.re);
	else if (c.re == 0 && c.im)
	{
		if (c.im > 0)
		{
			if (c.im != 1)
				printf("%gi\n", c.im);
			else
				printf("i\n");
		}
		if (c.im == 0)
			printf("%gn", c.im);
		if (c.im < 0)
		{
			if (c.im != -1)
				printf("-%gi\n", -(c.im));
			else
				printf("-i\n");
		}
	}
	if (c.re == 0 && c.im == 0)
		printf("%d\n", 0);
}
