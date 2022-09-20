/*
 * _Complex keyword - declare complex number
 */

#include <stdio.h>
#include <complex.h>

int main()
{
	/* declaring a complex number */
	double complex z1 = 1 + 2*I;

	z1 = 3 * z1;

	printf("3 * (1.0+2.0i) = %.1f%+.1fi\n", creal(z1), cimag(z1));

	double _Complex z2 = 1 + 2*I;

	z2 = 1 / z2;

	printf("%.1f%+.1fi\n", creal(z2), cimag(z2));

	return 0;
}
