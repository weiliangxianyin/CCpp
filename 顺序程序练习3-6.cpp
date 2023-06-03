#include <stdio.h>
int main(void){
	
	double r,pi,circumference,area;
	scanf("%lf",&r);
	pi=3.14;
	circumference=2*pi*r;
	area=pi*r*r;
	
	printf("circumference=%.2lf area=%.2lf",circumference,area);
	
	return 0;
} 
