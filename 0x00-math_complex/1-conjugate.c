#include "holberton.h"

/**
 * conjugate - whole of complex from c.im & c.re
 * @c: number into
 * Return: number c
 */
complex conjugate(complex c)
{
	c.im = (-(c.im)); /* c.im *= -1; part imaginary*/
	c.re = c.re; /* part real */
	return (c);
}
