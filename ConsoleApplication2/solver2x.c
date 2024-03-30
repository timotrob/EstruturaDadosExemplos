#include <stdio.h>
#include "solver2x.h"
#include <math.h>


double calc_delta(double a, double b, double c)
{
	double resp = b * b - 4 * a * c;
}

void resolver(double a, double b, double c)
{
	double delta = calc_delta(a, b, c);
	if (delta < 0) {
		//N�o h� solu��o real
		printf("N�o h� solu��o real\n");
	}
	else if (delta > 0) {
		//H� duas solu��es reais
		double x1 = (- b + sqrt(delta))/(2*a);
		double x2 = (- b - sqrt(delta))/(2*a);
		printf("H� duas solu��es\n");
		printf("x1=%0.2f\n", x1);
		printf("x1=%0.2f\n", x2);
	}
	else {
		//H� uma solu��o real
		double x1 = (- b + sqrt(delta))/(2*a);
		printf("H� uma solu��o real\n");
		printf("x1=x2=%0.2f\n", x1);
	}
}

void run_solver2x()
{
	//X^2 -3*X+ 2 (x1=1 e x2=2)
	printf("Reolvendo:X^2 -3*X+ 2\n");
	resolver(1.0,-3.0,2.0 );

}
