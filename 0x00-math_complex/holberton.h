#ifndef HOLBER_H
#define HOLBER_H
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct complex_com - Struct desing for declare number real or imaginary
 * @re: Number real
 * @im: Number imaginary
 */
typedef struct complex_com
{
	double re;
	double im;
} complex;
void display_complex_number(complex c);
complex conjugate(complex c);
#endif /*END HOLBER_H*/
