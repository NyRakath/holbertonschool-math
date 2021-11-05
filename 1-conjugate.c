#include "holberton.h"

/**
 * display_complex_number - print number complex real + imaginary
 * @c: number into
 * Return: Always 0.
 */
complex conjugate(complex c)
{
	c.im = (-(c.im)); /* c.im *= -1; part imaginary*/ 
	c.re = c.re; /* part real */ 
	return (c);
}