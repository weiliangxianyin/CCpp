#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart ){
	int t=x;
	*intpart=t;
	double s=x-t;
	*fracpart=s;
}

int main() {
	float x, fracpart;
	int intpart;

	scanf("%f", &x);
	splitfloat(x, &intpart, &fracpart);
	printf("The integer part is %d\n", intpart);
	printf("The fractional part is %g\n", fracpart);

	return 0;
}
