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
				printf("%.0f + %.0fi\n", c.re, c.im);
			else
				printf("%.0f + i\n", c.re);
		}
		if (c.im < 0)
		{
			if (c.im != -1)
				printf("%.0f - %.0fi\n", c.re, -(c.im));
			else
				printf("%.0f - i\n", c.re);
		}
	}
	else if (c.re && c.im == 0)
		printf("%.0f\n", c.re);
	else if (c.re == 0 && c.im)
	{
		if (c.im > 0)
		{
			if (c.im != 1)
				printf("%.0fi\n", c.im);
			else
				printf("i\n");
		}
		if (c.im == 0)
			printf("%.0f\n", c.im);
		if (c.im < 0)
		{
			if (c.im != -1)
				printf("-%.0fi\n", -(c.im));
			else
				printf("-i\n");
		}
	}
	if (c.re == 0 && c.im == 0)
		printf("%d\n", 0);
}
