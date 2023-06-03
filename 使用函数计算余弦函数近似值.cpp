#include <stdio.h>
#include <math.h>
double funcos( double e, double x );
int main() {
	double e, x;
	scanf("%lf %lf", &e, &x);
	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
	return 0;
}
int m(int b);
double funcos( double e, double x ) {
	double z=1,i=0,s=0,n=1;
	for(; n>=e; i++) {
		n=pow(x,2*i)/m(2*i);
		s=s+n*z;
		z=-z;
	}
	return s;
}
int m(int b) {
	int t=1;
	if(b==0)return 1;
	else {
		for(; b!=0; b--) {
			t=t*b;
		}
		return t;
	}
}
