#include <stdio.h>
int main(void) {
	double v,r,h;
	scanf("%lf%lf",&r,&h);
	v=3.14*r*r*h;
	printf("%.3lf",v);
	return 0;
}
