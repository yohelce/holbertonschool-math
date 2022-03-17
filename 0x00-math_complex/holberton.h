#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/**
 * struct complex - math complex
 * @re: real number
 * @im: imaginary number
 *
 * Description: number structure for complex mathematical operations
 */

typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);

#endif /*HOLBERTON_H*/
