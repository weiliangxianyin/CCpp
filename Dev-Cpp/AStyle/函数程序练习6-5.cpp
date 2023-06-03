#include <stdio.h>
int main(void) {
	double r,s,c;
	scanf("%lf",&r);
	s=3.14*r*r;
	c=2*3.14*r;
	printf("area=%.2lf, perimeter=%.2lf",s,c);
	return 0;
}
