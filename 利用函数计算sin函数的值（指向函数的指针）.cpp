#include "stdio.h"
#include "math.h"
double f(double (*pfun)(double x),double x);
int main() {	
	double x,y;
	scanf("%lf",&x);
	y=f(sin,x);
	printf("%.2lf\n",y);
	return 0;
	}
double f(double (*pfun)(double x),double x){
	return (*pfun)(x);
}	

