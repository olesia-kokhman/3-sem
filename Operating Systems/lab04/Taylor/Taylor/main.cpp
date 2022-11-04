#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[]) {
	double  A = atof(argv[1]), B = atof(argv[2]), step = atof(argv[3]), accuracy = atof(argv[4]), x, taylor, formula;
	int i, sd;
	for (x = A; x < B; x += step) {
		taylor = 1;  i = 2; sd = 1; formula = 0;
		while (fabs(sd) > accuracy) {
			sd = sd * (-1) * x;
			taylor += sd * i;
			++i;
		}formula = pow(1.0 + x, -2.0);
		printf("x = % lf\tformula = % lf\ttaylor = % lf|\tdiv=%lf\n ", x, formula, taylor, fabs(formula - taylor));
	}
	return 0;
}
