#include <stdio.h>
#include <math.h>
int main(void){
	double x,y;
	
	scanf("%lf",&x);
	
    y=pow(x,3.5)+fabs(x-2)+1/x;
	printf("y=%.3lf",y);	
	
	
	
	
	return 0;
} 
