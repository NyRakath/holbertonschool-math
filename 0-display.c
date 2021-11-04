#include "holberton.h"

/**
 * display_complex_number - print number complex real + imaginary
 * @c: number into
 * Return: Always 0.
 */
void display_complex_number(complex c)
{
	char sign;
	float vabsolute = (c.im < 0) ? (-(c.im)) : c.im;

	if (c.im == 0)
		printf("%.f\n", c.re);
	if (vabsolute > 0)
	{
		sign = (c.im > 0) ? '+' : '-';
		printf("%.f %c %.fi\n", c.re, sign, vabsolute);
	}


}

