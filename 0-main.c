#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;

    c1.re = 0;
    c1.im = -77;
    display_complex_number(c1);
    c1.re = 0;
    c1.im = 56;
    display_complex_number(c1);
    return (0);
}