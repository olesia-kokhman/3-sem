//#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	double  A, B, step, accuracy, sd, x, i, taylor, formula;
	printf("Enter A:\n ");
	scanf_s("%lf ", &A);
	printf("Enter B:\n ");
	scanf_s("%lf", &B);
	printf("Enter a step:\n ");
	scanf_s("%lf", &step);
	printf("Enter accuracy:\n");
	scanf_s("%lf", &accuracy);
	for (x = A; x < B; x += step) {
		taylor = 1;  i = 2; sd = 1; formula = 0;
		while (fabs(sd) > accuracy) {
			sd = sd * (-1) * x;
			taylor += sd * i;
			++i;
		}
		formula = pow(1 + x, -2);
		printf("x = % lf\tformula = % lf\ttaylor = % lf|\tdiv=%lf\n ", x, formula, taylor, fabs(formula - taylor));
	}
	return 0;
}
