#include <stdio.h>
#include <math.h>

double mysin(double x);
int fac(int i);

int main(void) {
	double x;
	scanf("%lf", &x);
	printf("sin%.2lfµÄÖµÎª%.2lf\n", x, mysin(x));
	return 0;
}

double mysin(double x) {
	x = x / 180 * 3.14;
	int t = 1;
	double sinx = 0;
	for (int i = 1;; i += 2) {
		double power = 1;
		for (int j = 0; j < i; j++) {
			power *= x;
		}
		double item = power / fac(i) * t;
		if (fabs(item) < 1e-6) break;
		sinx += item;
		t = -t;
	}
	return sinx;
}

int fac(int i) {
	int sum = 1;
	while (i > 0) {
		sum *= i;
		i--;
	}
	return sum;
}

